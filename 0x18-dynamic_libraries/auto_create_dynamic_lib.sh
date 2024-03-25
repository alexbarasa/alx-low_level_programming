#!/bin/bash
gcc -c -Wall -Werror -Wextra -pedantic -std=gnu89 -fpic -I. *.c
gcc -shared -o libdynamic.so *.o
#rm -f *.o
