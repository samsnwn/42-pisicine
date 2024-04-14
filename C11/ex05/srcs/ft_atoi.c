int	ft_atoi(char *str)
{
	int digit;
	int minus_count;

	digit = 0;
	minus_count = 0;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r') || *str == '\f')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus_count++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		digit = digit * 10 + (*str - '0');
		str++;
	}
	if (minus_count % 2 != 0)
		digit = -digit;
	return (digit);
}