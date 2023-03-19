#include <stdio.h>
/**
 *main - print if the number is postive, zero, or negative
 *Description: using the main function
 *this program prints "Programming is positive, zero, or negative"
 *Return: 0
 */
int main(void)
{
char ca;
for (ca = '0'; ca <= '9'; ca++)
{
putchar(ca);
}
for (ca = 'a'; ca <= 'f'; ca++)
{
putchar(ca);
}
putchar('\n');
return (0);
}
