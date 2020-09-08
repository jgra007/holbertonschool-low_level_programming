#!/bin/bash
gcc -g -fPIC -Wall -Werror -Wextra -pedantic *.c *.o -shared -o liball.so