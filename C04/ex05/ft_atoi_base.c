// • Write a function that converts the initial portion of the string pointed by str to int representation.
// • str is in a specific base given as a second parameter.
// • excepted the base rule, the function should work exactly like ft_atoi.
// • If there’s an invalid argument,
// the function should return 0. Examples of invalid arguments :
// ◦ base is empty or size of 1;
// ◦ base contains the same character twice ; ◦ base contains + or
// - or whitespaces;

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

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] < 32 || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	char_to_int(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (c - '0');
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (c - 'A' + 10);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (c - 'a' + 10);
	}
	return (-1); // Invalid character
}

int	ft_atoi_base(char *str, char *base)
{
	int	digit;
	int	minus_count;
	int	base_len;
	int	base_value;

	digit = 0;
	minus_count = 0;
	base_len = 0;
	if (!str || !is_valid_base(base))
		return (0);
	while (base[base_len])
		base_len++;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r') || *str == '\f')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus_count++;
		str++;
	}
	while (*str)
	{
		base_value = char_to_int(*str);
		if (base_value == -1 || base_value >= base_len)
			break ;
		digit = digit * base_len + base_value;
		str++;
	}
	if (minus_count % 2 != 0)
		digit = -digit;
	return (digit);
}

// int	main(void)
// {
// 	char *str = "    +++--+--+12343456ab567";
// 	// char *base = "0123456789";
// 	// char *base = "01";
// 	char *base = "0123456789ABCDEF";
// 	// char *base = "poneyvif";

// 	printf("%d", ft_atoi_base(str, base));
// 	return (0);
// }