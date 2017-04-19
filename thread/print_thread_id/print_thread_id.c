#include "apue.h"
#include "pthread.h"

pthread_t ntid;

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

int main ()
{
	int err=0 ;
	err= pthread_create(&ntid,NULL,thr_func,NULL);

	if(err != 0)
		err_quit("cat not create thread : %s \n",strerror(err));
	printids("In main thread");
	sleep(60);
	exit(0);
}
