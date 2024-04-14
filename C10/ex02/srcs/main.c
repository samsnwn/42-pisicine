#include "ft_tail.h"

int	main(int argc, char *argv[])
{
	if (argc == 1)
	{
		write(2, "File name missing\n", 18);
		return (1);
	}
	if (argc == 3 || argc > 4 || ft_strcmp(argv[1], "-c") != 0)
	{
		write(2, "Usage: ft_tail -c <number> <file>\n", 34);
		return (1);
	}
	if (argc == 2)
		ft_tail(argv);
	if (argc == 4)
		ft_tail(argv);
	return (0);
}
