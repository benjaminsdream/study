#!/bin/bash
make -f makefile_return_0 1>/dev/null
echo $?

make -f makefile_return_1 -q
echo $?

make -f makefile_return_2 ERROR=input error 2>/dev/null
echo $?

