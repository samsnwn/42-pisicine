#ifndef DO_OP_H
# define DO_OP_H

# include <stdio.h>
# include <unistd.h>

int	ft_atoi(char *str);
int	do_op(char **argv);
int	add(int a, int b);
int	subtract(int a, int b);
int	divide(int a, int b);
int	multiply(int a, int b);
int	modulo(int a, int b);

#endif