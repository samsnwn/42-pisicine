// • Create a function that displays a string of characters onscreen. If this string con- tains characters that aren’t printable,
// they’ll have to be displayed in the shape of hexadecimals (lowercase),
// preceeded by a "backslash".
// • For example :
// Coucou\ntu vas bien ?
// The function should display :
//  Coucou\0atu vas bien ?

#include <stdio.h>
#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	hex[4];
	int		byte;

	while (*str != '\0')
	{
		if (*str >= ' ' && *str <= '~' && *str != '\\')
		{
			write(1, str, 1);
		}
		else
		{
			byte = (unsigned char)*str;
			hex[0] = '\\';
			hex[1] = "0123456789abcdef"[byte >> 4];
			hex[2] = "0123456789abcdef"[byte & 0x0f];
			hex[3] = '\0';
			write(1, hex, 3);
		}
		str++;
	}
}

// int	main(void)
// {
// 	char *str = "Coucou\ntu vas bien ?";
// 	ft_putstr_non_printable(str);
// 	return (0);
// }