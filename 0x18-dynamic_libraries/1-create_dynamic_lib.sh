#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
gcc *.o -shared -o libdynamic.so
gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -ldynamic -o len

sudo cp libdynamic.so /usr/lib
