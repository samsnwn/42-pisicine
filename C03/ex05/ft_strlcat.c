//  Reproduce the behavior of the function strlcat (man strlcat).
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && i + 1 < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < size)
		dest[i + j] = '\0';
	return (i + j);
}

// int	main(void)
// {
// 	char *dest = "Where to find me";
// 	char *src = "src";
// 	printf("%d", ft_strlcat(dest, src, 30));

// 	return (0);
// }