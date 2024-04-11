#ifndef FT_TAIL_H
# define FT_TAIL_H

# include <errno.h>
# include <fcntl.h>
# include <libgen.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>

# define BUFFER_SIZE 30720
void	ft_tail(char **filename, int size);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);

#endif