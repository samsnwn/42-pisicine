#include "ft_tail.h"

void	ft_tail(char **filenames)
{
	int		num_bytes;
	char	*filename;
	int		fd;
	off_t	file_size;
	ssize_t	bytes_read;
	char	buffer[BUFFER_SIZE];
	off_t	start_offset;

	num_bytes = ft_atoi(filenames[2]);
	filename = filenames[3];
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write_error("Error opening file: ");
		return ;
	}
	file_size = 0;
	// Read the file to determine its size
	while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		file_size += bytes_read;
	}
	if (bytes_read == -1)
	{
		write_error("Error reading file: ");
		close(fd);
		return ;
	}
	// Calculate the starting offset based on the number of bytes specified
	start_offset = (file_size > num_bytes) ? file_size - num_bytes : 0;
	// Set the file pointer to the starting offset
	if (lseek(fd, start_offset, SEEK_SET) == -1)
	{
		write_error("Error seeking file: ");
		close(fd);
		return ;
	}
	// Read and write content from the starting offset to the end of the file
	while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(1, buffer, bytes_read) != bytes_read)
		{
			write_error("Error writing to standard output: ");
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
}
