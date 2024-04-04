// • Create a function which reverses a given tabay of integer (first goes last,
// etc). • The arguments are a pointer to int and the number of ints in the tabay.

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}

// int	main(void)
// {
// 	int arr[] = {1, 2, 3, 4, 5};
// 	int size = sizeof(arr) / sizeof(arr[0]);

// 	printf("Original array: ");
// 	for (int i = 0; i < size; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}
// 	printf("\n");

// 	ft_rev_int_tab(arr, size);

// 	printf("Reversed array: ");
// 	for (int i = 0; i < size; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}
// 	printf("\n");

// 	return (0);
// }