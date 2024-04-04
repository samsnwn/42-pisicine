#include <stdio.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (src[count] != '\0' && count < n)
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char			dest[] = "string";
// 	char			src[] = "n";
// 	char			*pdest;
// 	char			*psrc;
// 	unsigned int	n;

// 	pdest = &dest[0];
// 	psrc = &src[0];
// 	n = sizeof(src);
// 	ft_strncpy(pdest, psrc, n);
// 	while (*pdest != '\0')
// 	{
// 		write(1, pdest, 1);
// 		pdest++;
// 	}
// 	return (0);
// }
