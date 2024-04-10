#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int result;

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