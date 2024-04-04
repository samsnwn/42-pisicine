// Create a function that displays the alphabet in lowercase, on a single line,
// by ascending order, starting from the letter ’a’.
// • Here’s how it should be prototyped :

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	x;

	x = 'a';
	while (x <= 'z')
	{
		write(1, &x, 1);
		x++;
	}
}

// int	main(void)
// {
// 	ft_print_alphabet();
// 	return (0);
// }
