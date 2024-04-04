// Create a function that swaps the value of two integers whose addresses are entered as parameters.

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 5;
// 	b = 7;
// 	ft_swap(&a, &b);
// 	printf("a: %d\nb: %d\n", a, b);
// 	return (0);
// }
