#include <unistd.h>

void	ft_putstr(char *str)
{
	char *p_s;

	p_s = str;
	while (*p_s)
		write(1, p_s++, 1);
}