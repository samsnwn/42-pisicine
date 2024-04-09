// We’re dealing with a program here,
// you should therefore have a function main in your .c file.
// • Create a program that displays its given arguments.
// • One per line, in the same order as in the command line.
// • It should display all arguments, except for argv[0].

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc < 2)
		return (1);
	i = 1;
	j = 0;
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		i++;
	}
	return (0);
}
