// Create a function that counts and returns the number of characters in a string.

int	ft_strlen(char *str)
{
	int count = 0;
	while (*str)
	{
		str++;
		count++;
	}
	return (count);
}