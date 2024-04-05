#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 1;
	if (nb > 0)
	{
		while (nb >= sqrt * sqrt)
		{
			if (sqrt * sqrt == nb)
				return (sqrt);
			if (nb > 46340)
				return (0);
			sqrt++;
		}
	}
	return (0);
}

/*int	main(void)
{
	int nb = 9;
	printf("%d", ft_sqrt(nb));
	return (0);
}*/
