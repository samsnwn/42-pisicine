// • Create a function ft_range which returns an array ofints. This int array should contain all values between min and max.
// • Min included - max excluded.
// • If minv ́alue is greater or equal to max’s value,
// a null pointer should be returned.

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*arr;

	size = max - min;
	i = 0;
	arr = (int *)malloc(sizeof(int) * size);
	if (arr == 0)
		return (0);
	if (min >= max)
		return (0);
	while (i < size)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}

// int	main(void)
// {
// 	int min;
// 	int max;
// 	int i;

// 	i = 0;
// 	min = 10;
// 	max = 20;
// 	while (i < max - min)
// 	{
// 		printf("%d ", ft_range(min, max)[i]);
// 		i++;
// 	}
// 	return (0);
// }