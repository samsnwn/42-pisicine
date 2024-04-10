// Create a function that takes an array of string as argument and the size of this array.
// • Here’s how it should be prototyped:
// struct s_stock_str *ft_strs_to_tab(int ac,char **av);
// It will transform each element of av into a structure.
// • The structure will be defined in the ft_stock_str.h file that we will provided,
// 	like this :

// typedef struct s_stock_str
// {
// 	int		size;
// 	char	*str;
// 	char	*copy;
// }			t_stock_str;

// ◦ size being the length of the string; ◦ str being the string;
// ◦ copy being a copy of the string;
// • It should keep the order of av.

// • The returned array should allocated in memory and its last element’s str set to 0,
// this will mark the end of the array.
// • It should return a NULL pointer if an error occurs.
// • We’ll test your function with our ft_show_tab (next exercise). Make it work ac- cording to this !

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		str++;
		count++;
	}
	return (count);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		i;

	i = 0;
	copy = (char *)malloc(sizeof(char) * ft_strlen(src));
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	int					j;
	struct s_stock_str	*array;

	if (ac <= 0 || av == NULL)
		return (NULL);
	array = (struct s_stock_str *)malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		array[i].size = ft_strlen(av[i]);
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
		if (array[i].copy == NULL)
		{
			// Free previously allocated memory before returning NULL
			j = 0;
			while (j < i)
			{
				free(array[j].copy);
				j++;
			}
			free(array);
			return (NULL);
		}
		i++;
	}
	// Set the last element's str to NULL to mark the end of the array
	array[ac].str = NULL;
	array[ac].size = 0;
	array[ac].copy = NULL;
	return (array);
}

// int	main(int argc, char **argv)
// {
// 	if (argc < 2)
// 		return (1);
// 	ft_strs_to_tab(argc, argv);
// 	return (0);
// }