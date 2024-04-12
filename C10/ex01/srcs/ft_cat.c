#include "ft_cat.h"

void	ft_cat(char **filenames, int size)
{
	int fd;
	ssize_t bytes_read;
	char buffer[BUFFER_SIZE];
	int i = 1;

	while (i < size)
	{
		char *filename = filenames[i];
		fd = open(filename, O_RDONLY | O_CREAT, 0600);
		if (fd == -1)
		{
			write_error("Cannot read file.\n");
			return ;
		}
		while ((bytes_read = read(fd, buffer, BUFFER_SIZE - 1)) > 0)
		{
			if (write(1, buffer, bytes_read) != bytes_read)
			{
				write_error("Error writing to standard output\n");
				close(fd);
				return ;
			}
		}
		if (bytes_read == -1)
		{
			write_error("Error reading file: ");
			close(fd);
			return ;
		}
		close(fd);
		i++;
	}
}