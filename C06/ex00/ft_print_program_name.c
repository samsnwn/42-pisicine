// We’re dealing with a program here,
// you should therefore have a function main in your .c file.
// • Create a program that displays its own name.

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;

	if (argc < 1)
		return (1);
	i = 0;
	while (argv[0][i] != '\0')
	{
		write(1, &argv[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}