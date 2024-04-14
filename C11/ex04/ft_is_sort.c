
// • Create a function ft_is_sort which returns 1 if the array is sorted and 0 if it isn’t. • Thefunctiongivenasargumentshouldreturnanegativeintegerifthefirstargument
// is lower than the second,
// 	0 if they’re equal or a positive integer for anything else.

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int ascending = 1;
	int descending = 1;
	int i = 0;

	// Check if the array is sorted in ascending order
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
		{
			ascending = 0;
			break ;
		}
		i++;
	}
	i = 0;
	// Check if the array is sorted in descending order
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
		{
			descending = 0;
			break ;
		}
		i++;
	}

	// If the array is sorted in ascending or descending order, return 1,
	// otherwise return 0
	if (ascending || descending)
		return (1);
	return (0);
}