#include "ft_tail.h"

int	main(int argc, char *argv[])
{
	if (argc != 4 || ft_strcmp(argv[1], "-c") != 0)
	{
		write(2, "Usage: ft_tail -c <number> <file>\n", 34);
		return (1);
	}
	ft_tail(argv);
	return (0);
}
