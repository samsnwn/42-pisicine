#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count])
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	dest[] = "String";
	char	src[] = "Some string";
	char	*pdest;
	char	*psrc;

	pdest = &dest[0];
	psrc = &src[0];

	ft_strcpy(pdest, psrc);
	while (*pdest != '\0')
	{
		write(1, pdest, 1);
		pdest++;
	}
	return (0);
}*/
