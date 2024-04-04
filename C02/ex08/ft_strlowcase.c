#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		else if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i];
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "SOMETHING";
	char	*pstr;
	char	*result;

	pstr = &str[0];
	result = ft_strlowcase(pstr);
	printf("%s", result);
	return (0);
}*/
