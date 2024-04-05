#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb > 1)
	{
		result = nb * ft_recursive_factorial(nb - 1);
	}
	return (result);
}

/*int	main(void)
{
	int	nb;

	nb = 5;
	printf("%d ", ft_recursive_factorial(nb));
	return (0);
}*/
