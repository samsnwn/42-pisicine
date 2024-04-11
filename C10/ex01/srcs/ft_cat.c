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
			write(2, "Cannot read file.\n", 18);
			write(2, strerror(errno), ft_strlen(strerror(errno)));
			write(2, "\n", 1);
			return ;
		}
		while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0)
		{
			if (write(1, buffer, bytes_read) != bytes_read)
			{
				write(2, "Error writing to standard output\n", 33);
				close(fd);
				return ;
			}
		}
		if (bytes_read == -1)
		{
			write(2, "Error reading file: ", 20);
			write(2, strerror(errno), ft_strlen(strerror(errno)));
			write(2, "\n", 1);
			close(fd);
			return ;
		}
		close(fd);
		i++;
	}
}