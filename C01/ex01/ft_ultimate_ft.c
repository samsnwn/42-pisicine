// Create a function that takes a pointer to pointer to pointer to pointer to pointer to pointer to pointer to pointer to pointer to int as a parameter and sets the value "42" to that int.

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

// int	main(void)
// {
// 	int c;
// 	int *p;
// 	int **p1;
// 	int ***p2;
// 	int ****p3;
// 	int *****p4;
// 	int ******p5;
// 	int *******p6;
// 	int ********p7;
// 	int *********p8;

// 	c = 0;
// 	p = &c;
// 	p1 = &p;
// 	p2 = &p1;
// 	p3 = &p2;
// 	p4 = &p3;
// 	p5 = &p4;
// 	p6 = &p5;
// 	p7 = &p6;
// 	p8 = &p7;
// 	ft_ultimate_ft(p8);
// 	printf("%d", c);
// 	return (0);
// }