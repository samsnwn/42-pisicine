unsigned int	ft_strlen(char *str)
{
	char *p;

	p = str;
	while (*p)
		p++;
	return ((unsigned int)(p - str));
}