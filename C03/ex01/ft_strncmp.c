// • Reproduce the behavior of the function strncmp (man strncmp).
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				result;
	unsigned int	i;

	i = 0;
	result = 0;
	while ((*s1 || *s2) && i < n)
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
		i++;
	}
	return (result);
}

// int	main(void)
// {
// 	char *s1 = "Copy thbs";
// 	char *s2 = "Copy that";

// 	printf("%d ", ft_strncmp(s1, s2, 3));
// 	printf("%d ", strncmp(s1, s2, 3));
// 	return (0);
// }