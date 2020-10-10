#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c | ar rv liball.a *.o
