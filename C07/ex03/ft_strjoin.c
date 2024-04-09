// • Write a function that will concatenate all the strings pointed by strs separated by sep.
// • size is the number of strings in strs
// • if size is 0, you must return an empty string that you can free().

#include <stdio.h>
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	get_total_length(int size, char **strs, char *sep)
{
	int	i;
	int	total_length;

	i = 0;
	total_length = 0;
	while (i < size)
	{
		total_length = total_length + ft_strlen(strs[i]);
		i++;
	}
	if (size > 1)
	{
		total_length = total_length + ft_strlen(sep) * (size - 1);
	}
	return (total_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*concat_string;
	int		i;
	int		total_length;

	i = 0;
	total_length = get_total_length(size, strs, sep);
	concat_string = (char *)malloc(sizeof(char) * (total_length + 1));
	if (size == 0)
	{
		concat_string = "";
		return (concat_string);
	}
	if (concat_string == NULL)
		return (NULL);
	concat_string[0] = '\0';
	while (i < size)
	{
		ft_strcat(concat_string, strs[i]);
		if (i < size - 1)
			ft_strcat(concat_string, sep);
		i++;
	}
	return (concat_string);
}

// int	main(void)
// {
// 	char	*strings[4] = {"", "Hello", "", "world"};
// 	char	*result1;
// 	char	*result2;
// 	char	*result3;

// 	result1 = ft_strjoin(4, strings, "-");
// 	result2 = ft_strjoin(4, strings, "");
// 	result3 = ft_strjoin(4, strings, ", ");
// 	printf("%s\n", result1);
// 	printf("%s\n", result2);
// 	printf("%s", result3);
// 	// Free dynamically allocated memory
// 	free(result1);
// 	free(result2);
// 	free(result3);
// 	return (0);
// }
