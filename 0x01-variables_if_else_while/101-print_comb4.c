#include <stdio.h>
/**
 * main - prints all different combinations of three
 * Return: always 0 success
 */
int main(void)
{
	int a, b, c;

	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
			for (c = 49; c < 58; c++)
			{
				if (c > b && b > a)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != 55 || b != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

