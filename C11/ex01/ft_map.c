// Create the function ft_map which, for a given ints array,
// applies a function on all elements of the array (in order) and returns a array of all the return values.
// • This function will be applied following the array’s order.

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i = 0;
	int *new_array;
	if (length <= 0)
		return (NULL);
	new_array = malloc(sizeof(int) * length);
	if (!new_array)
		return (NULL);
	while (i < length)
	{
		new_array[i] = f(tab[i]);
		i++;
	}
	return (new_array);
}