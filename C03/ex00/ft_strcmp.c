// Reproduce the behavior of the function strcmp (man strcmp).
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	result;

	result = 0;
	while (*s1 || *s2)
	{
		if (*s1 == *s2)
			result = 0;
		else
		{
			result = *s1 - *s2;
			break ;
		}
		s1++;
		s2++;
	}
	return (result);
}

// int	main(void)
// {
// 	char *s1 = "Copy thbs";
// 	char *s2 = "Copy that";

// 	printf("%d ", ft_strcmp(s1, s2));
// 	printf("%d ", strcmp(s1, s2));
// 	return (0);
// }