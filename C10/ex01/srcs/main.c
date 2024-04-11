#include "ft_cat.h"

int	main(int argc, char *argv[])
{
	if (argc < 2)
	{
		write(2, "File names missing.\n", 19);
		return (1);
	}

	// if one of the arguments is >
	// copy all concatenated content from  argv[i] into the newly created argv[last element after >]
	// TODO

	ft_cat(argv, argc);

	return (0);
}