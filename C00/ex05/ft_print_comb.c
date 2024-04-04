// Create a function that displays all different combinations of three different digits in ascending order,
// listed by ascending order - yes, repetition is voluntary.
// • Here’s the intended output :
// $>./a.out | cat -e
// 012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789$>
// • 987 isn’t there because 789 already is.
// • 999 isn’t there because the digit 9 is present more than once.
// • Here’s how it should be prototyped :

#include <unistd.h>

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '/';
	while (a++ < '6')
	{
		b = a;
		while (b++ < '8')
		{
			c = b;
			while (c++ < '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				write(1, ", ", 2);
			}
		}
	}
	write(1, "789", 3);
}

// int	main(void)
// {
// 	ft_print_comb();
// 	return (0);
// }