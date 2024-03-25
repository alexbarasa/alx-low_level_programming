#!/bin/bash
#Create the C source file for the shared object
echo 'void print_winning_message() { printf("--> Please make me win!\n"); }' > win_message.c
# Compile the C source file into a shared object
gcc -shared -fPIC -o win_message.so win_message.c -ldl
# Set LD_PRELOAD to our shared object and execute gm
LD_PRELOAD=./win_message.so ./gm 9 8 10 24 75 9
# Clean up by removing both win_message.c and win_message.so files
rm win_message.c win_message.so
