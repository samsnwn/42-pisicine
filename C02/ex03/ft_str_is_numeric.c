#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	str[] = "a124";
	char	*pstr = &str[0];
	int	result;

	result = ft_str_is_numeric(pstr);
	printf("%d", result);
	return (0);
}*/
