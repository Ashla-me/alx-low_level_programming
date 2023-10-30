#!/bin/bash
gcc -c -Wall -Werror -Wextra *.c
ar -r libmy.a
gcc main.c -L -lall -o main
