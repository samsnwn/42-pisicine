// Reproduce the behavior of the function strdup (man strdup).

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		str++;
		count++;
	}
	return (count);
}

char	*ft_strdup(char *src)
{
	char *copy;
	int i = 0;

	copy = (char *)malloc(sizeof(char) * ft_strlen(src));

	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}