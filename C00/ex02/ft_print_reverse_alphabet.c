// Create a function that displays the alphabet in lowercase, on a single line,
// by descending order, starting from the letter ’z’.
// • Here’s how it should be prototyped :

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	x;

	x = 'z';
	while (x >= 'a')
	{
		write(1, &x, 1);
		x--;
	}
}

// int	main(void)
// {
// 	ft_print_reverse_alphabet();
// 	return (0);
// }