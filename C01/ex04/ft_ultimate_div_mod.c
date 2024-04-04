// This function divides parameters a by b. The result of this division is stored in the int pointed by a. The remainder of the division is stored in the int pointed by b.

void	ft_ultimate_div_mod(int *a, int *b)
{
	int x;
	int y;

	x = (*a / *b);
	y = (*a % *b);
	*a = x;
	*b = y;
}