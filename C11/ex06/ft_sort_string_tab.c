#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	result;

	result = 0;
	while (*s1 || *s2)
	{
		if (*s1 == *s2)
			result = 0;
		else
		{
			result = *s1 - *s2;
			break ;
		}
		s1++;
		s2++;
	}
	return (result);
}

void	ft_swap(char *a, char *b)
{
	char	*temp;

	*temp = *a;
	*a = *b;
	*b = *temp;
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	size;
	int	j;

	size = sizeof(tab) / sizeof(tab[0]);
	i = 0;
	j = 0;
	while (j < size - 1)
	{
		while (tab[i][j] != '\0')
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
				ft_swap(tab[i], tab[i + 1]);
			i++;
		}
		i = 0;
		j++;
	}
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(void)
{
	int i = 0;
	int j = 0;
	char *arr[] = {"hello", "hella", "helli", "helle"};
	int size = sizeof(arr) / sizeof(arr[0]);

	ft_sort_string_tab(arr);
	while (i < size)
	{
		ft_putstr(arr[i]);
		i++;
	}
	return (0);
}