// • Create a function that displays a number in a base system in the terminal.
// • This number is given in the shape of an int,
// and the radix in the shape of a string
// of characters.
// • The base-system contains all useable symbols to display that number :
// ◦ 0123456789 is the commonly used base system to represent decimal numbers ◦ 01 is a binary base system ;
// ◦ 0123456789ABCDEF an hexadecimal base system ;
// ◦ poneyvif is an octal base system.
// • The function must handle negative numbers.
// • If there’s an invalid argument,
// nothing should be displayed. Examples of invalid
// arguments :
// ◦ base is empty or size of 1;
// ◦ base contains the same character twice ; ◦ base contains + or - ;

#include <unistd.h>

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

void	ft_putnbr_base(long int nbr, char *base)
{
	int		base_len;
	char	digit;

	base_len = 0;
	if (!is_valid_base(base))
		return ;
	while (base[base_len])
		base_len++;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= base_len)
		ft_putnbr_base(nbr / base_len, base);
	digit = base[nbr % base_len];
	write(1, &digit, 1);
}

// int	main(void)
// {
// 	int nbr = 128345456;
// 	// char *base = "0123456789";
// 	char *base = "01";
// 	// char *base = "0123456789ABCDEF";
// 	// char *base = "poneyvif";

// 	ft_putnbr_base(nbr, base);
// 	return (0);
// }