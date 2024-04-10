// Create a function that displays the content of the array created by the previous function.
// The structure will be the same as the previous exercise and will be defined in the ft_stock_str.h file
// • For each element, we’ll display:
// ◦ the string followed by a ’\n’
// ◦ the size followed by a ’\n’
// ◦ the copy of the string (that could have been modified) followed by a ’\n’
// • We’ll test your function with our ft_strs_to_tab (previous exercise). Make it work according to this !

#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>
#include <unistd.h> // for write

void	ft_show_tab(struct s_stock_str *par)
{
	int	size;
	int	size_len;
	int	temp;
	int	i;

	if (par == NULL)
		return ;
	while (par->str != NULL)
	{
		write(1, "String: ", 8);
		write(1, par->str, strlen(par->str));
		write(1, "\n", 1);
		// Convert size to string manually
		size = par->size;
		char size_str[20]; // assuming size won't exceed 20 digits
		size_len = 0;
		temp = size;
		while (temp != 0)
		{
			temp /= 10;
			size_len++;
		}
		i = size_len - 1;
		while (size != 0)
		{
			size_str[i--] = '0' + (size % 10);
			size /= 10;
		}
		write(1, "Size: ", 6);
		write(1, size_str, size_len);
		write(1, "\n", 1);
		write(1, "Copy: ", 6);
		write(1, par->copy, strlen(par->copy));
		write(1, "\n", 1);
		par++;
	}
}

// int	main(void)
// {
// 	char				*strings[] = {"Hello", "World", "12345", NULL};
// 	struct s_stock_str	*array;

// 	array = ft_strs_to_tab(3, strings);
// 	ft_show_tab(array);
// 	for (int i = 0; array[i].str != NULL; i++)
// 	{
// 		free(array[i].copy);
// 	}
// 	free(array);
// 	return (0);
// }
