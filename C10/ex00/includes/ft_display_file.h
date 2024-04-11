#ifndef FT_DISPLAY_FILE_H
# define FT_DISPLAY_FILE_H

# include <fcntl.h>
# include <stdio.h>
# include <unistd.h>

# define BUFFER_SIZE 4096
void	ft_display_file(char *filename);

#endif