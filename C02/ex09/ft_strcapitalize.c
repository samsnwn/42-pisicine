#include <stdio.h>

int	char_is_alpha(char c)
{
	if ((c < 65 || c > 90) && (c < 97 || c > 122))
	{
		return (0);
	}
	return (1);
}

int	char_is_num(char c)
{
	if (c < 48 || c > 57)
	{
		return (0);
	}
	return (1);
}

int	char_is_uppercase(char c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (char_is_alpha(str[i]))
		{
			if (char_is_uppercase(str[i]))
				str[i] = str[i] + 32;
			if (!char_is_alpha(str[i - 1]) && !char_is_num(str[i - 1]))
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str[] = "salut, comMent tu vas ? 42mots-deux; cinquante+et+un";
// 	char	*result;

// 	result = ft_strcapitalize(&str[0]);
// 	printf("%s", result);
// 	printf("\n");
// 	return (0);
// }
