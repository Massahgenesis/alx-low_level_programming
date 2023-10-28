#!/bin/bah
gcc -Wall -pedantic -Werror -Wexrta -c *.c
ar -rc liball.a *.o
ranlib liball.a
