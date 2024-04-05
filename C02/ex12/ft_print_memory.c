// • Create a function that displays the memory area onscreen.
// • The display of this memory area should be split into three "columns" separated by
// a space :
// ◦ The hexadecimal address of the first line’s first character followed by a ’:’.
// ◦ The content in hexadecimal with a space each 2 characters and should be padded with spaces if needed (see the example below).
// ◦ The content in printable characters.
// • If a character is non-printable, it’ll be replaced by a dot.
// • Each line should handle sixteen characters.
// • If size equals to 0, nothing should be displayed.
// • It should return addr.

// $> ./ft_print_memory
// 000000010a161f40: 426f 6e6a 6f75 7220 6c65 7320 616d 696e Bonjour les amin
// 000000010a161f50: 6368 6573 090a 0963 2020 6573 7420 666f ches...c est fo
// 000000010a161f60: 7509 746f 7574 0963 6520 7175 206f 6e20 u.tout.ce qu on
// 000000010a161f70: 7065 7574 2066 6169 7265 2061 7665 6309 peut faire avec.
// 000000010a161f80: 0a09 7072 696e 745f 6d65 6d6f 7279 0a0a ..print_memory..
// 000000010a161f90: 0a09 6c6f 6c2e 6c6f 6c0a 2000 ..lol.lol. .
// $> ./ft_print_memory | cat -te
// 0000000107ff9f40: 426f 6e6a 6f75 7220 6c65 7320 616d 696e Bonjour les amin$
// 0000000107ff9f50: 6368 6573 090a 0963 2020 6573 7420 666f ches...c est fo$
// 0000000107ff9f60: 7509 746f 7574 0963 6520 7175 206f 6e20 u.tout.ce qu on $
// 0000000107ff9f70: 7065 7574 2066 6169 7265 2061 7665 6309 peut faire avec.$
// 0000000107ff9f80: 0a09 7072 696e 745f 6d65 6d6f 7279 0a0a ..print_memory..$
// 0000000107ff9f90: 0a09 6c6f 6c2e 6c6f 6c0a 2000 ..lol.lol. .$
// $>

#include <stdio.h>
#include <unistd.h>

// Function to print hexadecimal address
void	print_hex_address(unsigned long address)
{
	char	hex_address[16];
	int		index;
	int		digit;

	index = 15;
	hex_address[index--] = '\0';
	while (address > 0)
	{
		digit = address % 16;
		hex_address[index--] = "0123456789abcdef"[digit];
		address /= 16;
	}
	while (index >= 0)
	{
		hex_address[index--] = '0';
	}
	write(1, hex_address, 16);
}

// Function to print hexadecimal content
void	print_hex_content(unsigned char *ptr, int remaining_chars)
{
	int		j;
	char	hex_digit[3];
	int		byte;

	j = 0;
	while (j < 16)
	{
		if (j % 2 == 0)
		{
			write(1, " ", 1);
		}
		if (j < remaining_chars)
		{
			byte = ptr[j];
			hex_digit[0] = "0123456789abcdef"[byte >> 4];
			hex_digit[1] = "0123456789abcdef"[byte & 0x0f];
			hex_digit[2] = '\0';
			write(1, hex_digit, 2);
		}
		else
		{
			write(1, "  ", 2);
		}
		j++;
	}
}

// Function to print printable characters
void	print_printable_chars(unsigned char *ptr, int remaining_chars)
{
	int		j;
	char	c;

	j = 0;
	while (j < remaining_chars)
	{
		c = ptr[j];
		if (c >= ' ' && c <= '~')
		{
			write(1, &c, 1);
		}
		else
		{
			write(1, ".", 1);
		}
		j++;
	}
}

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

// Function to print memory content
void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*ptr;
	unsigned char	*end_ptr;
	int				remaining_chars;

	ptr = (unsigned char *)addr;
	// Pointer to the end of the memory block
	end_ptr = ptr + size;
	// Print memory content in chunks of 16 bytes
	while (ptr < end_ptr)
	{
		// Print hexadecimal address
		print_hex_address((unsigned long)ptr);
		write(1, ": ", 2);
		// Print hexadecimal content
		remaining_chars = end_ptr - ptr;
		print_hex_content(ptr, remaining_chars);
		write(1, " ", 1);
		// Print printable characters
		print_printable_chars(ptr, remaining_chars);
		write(1, "\n", 1);
		// Move to the next chunk
		ptr += 16;
	}
	return (addr);
}

int	main(void)
{
	char	*str;

	str = "Bonjour les amin ches...c est fo u.tout.ce qu on peut faire avec...print_memory...lol.lol. .";
	// ft_print_memory(str, ft_strlen(str));
	ft_print_memory(str, 30);
	return (0);
}
