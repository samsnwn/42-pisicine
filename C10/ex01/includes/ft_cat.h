#ifndef FT_CAT_H
# define FT_CAT_H

# include <errno.h>
# include <fcntl.h>
# include <libgen.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>

# define BUFFER_SIZE 30720
void	ft_putstr(char *str);
void	ft_cat(char **filename, int size);
char	*ft_strcat(char *dest, char *src);
int		ft_strlen(char *str);

#endif