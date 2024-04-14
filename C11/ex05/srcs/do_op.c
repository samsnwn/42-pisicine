// Create a program called do-op.
// • The progam will be executed with three arguments: do-op value1 operateur
// value2
// You should use an array of pointers to function to take care of the operator.
// • In case of an invalid operator your program should print 0.
// • If the number of arguments is invalid, do-op doesn’t display anything.
// • Your program should accept and print the result for the following operators: ’+’ ’-’ ’/’ ’*’ and ’%’
// • Your program should treat value as int.
// • In case of a division by 0, it should print:      Stop : division by zero
//  In case of a modulo by 0, it should print: Stop : modulo by zero

#include "do_op.h"

typedef struct operation
{
	char	op;
	int		(*f)(int, int);
}			operation;

int	do_op(char **argv)
{
	int value1;
	int value2;

	value1 = ft_atoi(argv[0]);
	value2 = ft_atoi(argv[2]);

	if (*argv[1] != '+' || *argv[1] != '-' || *argv[1] != '/' || *argv[1] != '*'
		|| *argv[1] != '%')
	{
		write(1, "0", 1);
		return (0);
	}

	if (*argv[1] == '+')
	{
		return (value1 + value2);
	}
	if (*argv[1] == '-')
	{
		return (value1 - value2);
	}
	if (*argv[1] == '*')
	{
		return (value1 * value2);
	}
	if (*argv[1] == '/')
	{
		if (*argv[2] == 0)
		{
			write(1, "Stop : division by zero", 23);
			return (0);
		}
		return (value1 / value2);
	}
	if (*argv[1] == '%')
	{
		if (*argv[2] == 0)
		{
			write(1, "Stop : modulo by zero", 21);
			return (0);
		}
		return (value1 % value2);
	}
	return (0);
}