#include "ft_display_file.h"

void	ft_display_file(char *filename)
{
	int fd;
	ssize_t bytes_read;
	char buffer[BUFFER_SIZE];

	fd = open(filename, O_RDONLY | O_CREAT, 0600);
	if (fd == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return ;
	}
	while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		write(1, buffer, bytes_read);
	}
	close(fd);
}