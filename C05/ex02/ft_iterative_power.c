#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	result = 1;
	i = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i <= power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}

/*int	main(void)
{
	int	nb;
	int	power;

	nb = 4;
	power = 2;
	printf("%d ", ft_iterative_power(nb, power));
	return (0);
}*/
