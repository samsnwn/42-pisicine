#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max) // Change return type to int*
{
	int size;
	int i;
	int *arr;

	size = max - min;
	i = 0;
	if (size <= 0)
		return (NULL);
	arr = (int *)malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);
	while (i < size)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;

	size = max - min;
	if (size <= 0)
	{
		*range = NULL;
		return (0);
	}
	*range = ft_range(min, max);
	if (*range == NULL)
		return (-1);
	return (size);
}

// int	main(void)
// {
// 	int	min;
// 	int	max;
// 	int	*range;
// 	int	size;

// 	min = 10;
// 	max = 20;
// 	size = ft_ultimate_range(&range, min, max);
// 	if (size == -1)
// 		printf("Error: memory allocation failed\n");
// 	else if (size == 0)
// 		printf("Error: min is greater than or equal to max\n");
// 	else
// 	{
// 		printf("Range size: %d\n", size);
// 		printf("Range elements: ");
// 		for (int i = 0; i < size; i++)
// 		{
// 			printf("%d ", range[i]);
// 		}
// 		printf("\n");
// 		free(range);
// 	}
// 	return (0);
// }
