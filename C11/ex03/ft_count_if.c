// Create a function ft_count_if which will return the number of elements of the array that return does not return 0 when passed to the function f.
// • This function will be applied following the array’s order.

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int count = 0;
	while (*tab)
	{
		if (f(*tab) != 0)
			count++;
		tab++;
	}
	return (count);
}