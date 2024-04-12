#include "ft_tail.h"

void	write_error(char *err_msg)
{
	write(2, err_msg, ft_strlen(err_msg));
	write(2, strerror(errno), ft_strlen(strerror(errno)));
	write(2, "\n", 1);
}