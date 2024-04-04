// • Write a function that displays the character passed as a parameter.
// • It will be prototyped as follows :

#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

// int main(void)
// {
//   char c = 'a';
//   ft_putchar(c);
//   return 0;
// }