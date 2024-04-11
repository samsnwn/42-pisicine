#include "ft_cat.h"

int	main(int argc, char *argv[])
{
	if (argc < 2)
	{
		write(2, "File names missing.\n", 19);
		return (1);
	}
	ft_cat(argv, argc);
	return (0);
}