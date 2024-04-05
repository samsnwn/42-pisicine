// Reproduce the behavior of the function strcat (man strcat).
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char *dest = "Please, ";
// 	char *src = "append";
// 	printf("%s", ft_strcat(dest, src));
// 	return (0);
// }