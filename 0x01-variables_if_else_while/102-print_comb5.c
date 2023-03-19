#include <stdio.h>

/**
 *main - prints all possible combinations of two two-digit numbers
 *Return: Always 0 (Success)
 */
int main(void)
{
	int w, m;

	for (w = 0; w < 100; w++)
	{
		for (m = 0; m < 100; m++)
		{
			if (w < m)
			{
			putchar((w / 10) + 48);
			putchar((w % 10) + 48);
			putchar(' ');
			putchar((m / 10) + 48);
			putchar((m % 10) + 48);
			if (w != 98 || m != 99)
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}

