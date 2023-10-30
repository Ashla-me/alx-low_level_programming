#!/bin/bash
gcc -c -Wall -Werror -Wextra *.c
ar -rcs liball.a *o
gcc -std=gnu89 main.c -L. -lall -o main
