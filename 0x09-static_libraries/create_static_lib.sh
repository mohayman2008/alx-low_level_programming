#!/bin/bash
mkdir ..lib.o.d
cd ..lib.o.d
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c ../*.c
cd ..
ar -rcs liball.a ./..lib.o.d/*.o
rm -R ..lib.o.d
