#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_putstr(char *str)
{
	char	*p_s;

	p_s = str;
	while (*p_s)
		write(1, p_s++, 1);
}

unsigned int	ft_strlen(char *str)
{
	char	*p;

	p = str;
	while (*p)
		p++;
	return ((unsigned int)(p - str));
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == 0)
			return (0);
		++s1;
		++s2;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

int	main(void)
{
	char *s1 = "Hello";
	char *s2 = "Hallo";

	int a = 5;
	int b = 3;
	printf("%d\n", ft_strcmp(s1, s2));
	printf("a :: %d, b :: %d\n", a, b);
	ft_swap(&a, &b);
	printf("a :: %d, b :: %d\n", a, b);
}