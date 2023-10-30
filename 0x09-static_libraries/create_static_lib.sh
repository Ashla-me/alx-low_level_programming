#!/bin/bash
gcc -c -Wall -Werror -Wextra *.c
ar -rcs libmy.a
gcc main.c -L -lall -o main
