
// • Write a function that converts the initial portion of the string pointed by str to its int representation
// • Thestringcanstartwithanarbitrayamountofwhitespace(asdeterminedbyisspace(3))
// • The string can be followed by an arbitrary amount of + and - signs,
// - sign will change
// Exercise 03
// the sign of the int returned based on
// • Finally the string can be followed by
// • Your function should read the string the number found until now.
// • You should not take care of overflow
// • Here’s an example of a program that
// $>./a.out " ---+--+1234ab567" -1234
// the number of - is odd or even.
// any numbers of the base 10.
// until the string stop following the rules and return
// or underflow. result can be undefined in that case. prints the atoi return value:

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	digit;
	int	minus_count;

	digit = 0;
	minus_count = 0;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r') || *str == '\f')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus_count++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		digit = digit * 10 + (*str - '0');
		str++;
	}
	if (minus_count % 2 != 0)
		digit = -digit;
	return (digit);
}

// int	main(void)
// {
// 	char *str = "    +++--+---+1234ab567";
// 	printf("%d", ft_atoi(str));
// 	return (0);
// }