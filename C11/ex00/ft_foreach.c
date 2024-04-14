// Create the function ft_foreach which, for a given ints array,
// applies a function on all elements of the array. This function will be applied following the array’s order.

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}