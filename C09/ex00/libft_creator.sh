#!/bin/sh

cc -c -Wall -Wextra -Werror *.c && ar rcs libft.a *.o && rm -f *.o