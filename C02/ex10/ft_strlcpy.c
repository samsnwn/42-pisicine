// Reproduce the behavior of the function strlcpy (man strlcpy).

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;

	count = 0;
	while (src[count] && count < size - 1)
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (count);
}

// int	main(void)
// {
// 	char	dest[] = "String";
// 	char	src[] = "Some string";
// 	char	*pdest;
// 	char	*psrc;

// 	pdest = &dest[0];
// 	psrc = &src[0];
// 	printf("%d ", ft_strlcpy(pdest, psrc, 4));
// 	return (0);
// }
