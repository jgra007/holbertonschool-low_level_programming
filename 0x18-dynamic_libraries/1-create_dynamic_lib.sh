#!/bin/bash
gcc -c -fPIC -Wall -Werror -Wextra -pedantic *.c *.o -shared -o liball.so