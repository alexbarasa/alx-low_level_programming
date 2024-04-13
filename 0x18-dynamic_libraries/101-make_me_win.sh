#!/bin/bash
echo 'void print_winning_message() { printf("--> Please make me win!\n"); }' > win_message.c
gcc -shared -fPIC -o win_message.so win_message.c -ldl
LD_PRELOAD=./win_message.so ./gm 9 8 10 24 75 9
