#include "apue.h"
#include "dirent.h"
#include <strings.h>
#include "pthread.h"

pthread_t ntid;

typedef struct KV
{
	char k[50];
	char v[50];
}KV;
void printids(const char *s )
{
	pid_t pid;
	pthread_t tid;
	pid = getpid();
	tid=pthread_self();
	printf("%s pid %u tid %u (ox%x)\n",s,pid,tid,tid);
}

void * thr_func(void *arg)
{
	printids("In new thread");
	sleep(60);
	return ((void *) 0);
}

void handle(char* buf,KV* kv)
{
	char delims[]=":";
	char *result = strtok(buf,delims);
	strncpy(kv->k,result,1024);
	result = strtok(NULL,delims);
	strncpy(kv->v,result,1024);
//	printf("k.len =  %d| v.len= %d\n",strlen(kv->k),strlen(kv->v));
		
}

void printProcsNum(KV* kv,int size)
{
	int i=0;
	for(;i<size;i++)
	{
		if(0 ==strcmp("Threads",(kv+i)->k))
		{
			printf("%s:%s",(kv+i)->k,(kv+i)->v);
			break;
		}
	}
}
void printProcsId(pid_t pid)
{
	char temp[10];
	sprintf(temp,"%d",pid);
	 char path[1024]="/proc/";
    strcat(path,temp);
    strcat(path,"/task");
	DIR *dir = opendir(path);
	struct dirent *pdir;
	while( (pdir=readdir(dir)) != NULL)
	{
		if(0 == strcmp(".",pdir->d_name))
			continue;
		else if (0 == strcmp("..",pdir->d_name))
			continue;
		printf("thread_id: %s\n",pdir->d_name);	
	}
}
void printProcStatus(pid_t pid)
{
	char temp[10];
	sprintf(temp,"%d",pid);
	char path[1024]="/proc/";
	strcat(path,temp);
	strcat(path,"/status");
	printf("%s\n",path);
	FILE *fp = fopen(path,"r");
	char buf[1024];
	KV kv[100];
	int i=0;
	while(fgets(buf,1024,fp) != NULL)
	{
		handle(buf,&(kv[i]));
		i++;
	}
	printProcsNum(kv,i);
	printProcsId(pid);
}
int main ()
{
	int err=0 ;
	err= pthread_create(&ntid,NULL,thr_func,NULL);
	if(err != 0)
		err_quit("cat not create thread : %s \n",strerror(err));
	pid_t pid = getpid();
	printProcStatus(pid);
	printids("In main thread");
	
	if((pid = fork()) < 0)
	{
		err_sys("fork error");
	}
	else if( pid == 0)
	{
		//child
		sleep(60);
	}
	
	printProcStatus(pid);
	sleep(60);
	exit(0);
}
