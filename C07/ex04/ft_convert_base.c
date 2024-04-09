// • Create a function that returns the result of the conversion of the string nbr from a base base_from to a base base_to.
// • nbr, base_from, base_to may be not writable.
// • nbr will follow the same rules as ft_atoi_base (from an other module). Beware of
// ’+’, ’-’ and whitespaces.
// • The number represented by nbr must fit inside an int.
// • If a base is wrong, NULL should be returned.
// • The returned number must be prefix only by a single and uniq ’-’ if necessary,
// no whitespaces, no ’+’.

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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	if (!nbr || !is_valid_base(base_from) || !is_valid_base(base_to))
		return (0);
	ft_atoi_base(nbr, base_to);
}

int	main(void)
{
	char *str = "    +++--+--+12343456ab567";
	char *base_to = "0123456789";
	// char *base = "01";
	char *base_from = "0123456789ABCDEF";
	// char *base = "poneyvif";

	printf("%d", ft_convert_base(str, base_from, base_to));
	return (0);
}