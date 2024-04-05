// • Reproduce the behavior of the function strstr (man strstr).
#include <stdio.h>

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

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char *str = "Where to find me";
// 	char *to_find = "find";
// 	printf("%s", ft_strstr(str, to_find));
// 	return (0);
// }