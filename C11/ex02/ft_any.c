// • Create a function ft_any which will return 1 if, passed to the function f,
// at least one element of the array returns something else than 0. Else,
// it should return 0.
// • This function will be applied following the array’s order.
//  The array will be delimited with a null pointer.

int	ft_any(char **tab, int (*f)(char *))
{
	while (*tab)
	{
		if (f(*tab))
			return (1);
		tab++;
	}
	return (0);
}