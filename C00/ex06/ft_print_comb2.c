#include <unistd.h>

// Function to convert integer to string
void	ft_itoa(int num, char *str)
{
	str[0] = num / 10 + '0';
	str[1] = num % 10 + '0';
}

// Function to display combinations
void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{ // Avoid repeating the last combination 98 99
		j = i + 1;
		while (j <= 99)
		{ // j starts from i
			// + 1 to avoid repeating combinations
			char buffer[7]; // Buffer to hold each combination (XX XX)
			ft_itoa(i, buffer);
			buffer[2] = ' ';
			ft_itoa(j, buffer + 3);
			write(1, buffer, 6); // Write to standard output
			// Add comma and space after each combination except the last one
			// Avoid adding a comma at the end
			if (!(i == 98 && j == 99))
			{
				write(1, ", ", 2);
			}
			j++;
		}
		i++;
	}
}

// int	main(void)
// {
// 	ft_print_comb2();
// 	write(STDOUT_FILENO, "$>\n", 3); // Write "$>\n" to indicate end of output
// 	return (0);
// }
