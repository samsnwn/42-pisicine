#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	str[] = "";
	char	*pstr;
	int	result;

	pstr = &str[0];
	result = ft_str_is_lowercase(pstr);
	printf("%d", result);
	return (0);
}*/
