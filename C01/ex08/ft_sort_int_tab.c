// • Create a function which sorts an array of integers by ascending order. • The arguments are a pointer to int and the number of ints in the array.

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	j = 0;
	while (j < size)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				ft_swap(&tab[i], &tab[i + 1]);
			}
			i++;
		}
		j++;
	}
}

// int	main(void)
// {
// 	int arr[] = {3, 5, 1, 4, 2};
// 	int size = sizeof(arr) / sizeof(arr[0]);

// 	printf("Original array: ");
// 	for (int i = 0; i < size; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}
// 	printf("\n");

// 	ft_sort_int_tab(arr, size);

// 	printf("Sorted array: ");
// 	for (int i = 0; i < size; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}
// 	printf("\n");
// 	return (0);
// }