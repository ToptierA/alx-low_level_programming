include "main.h"
/**
 * time_table - times table function
 * Return: times table
 */
void times_table(void)
{
	int i;
	int w;
	int d;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (w = 1; w <= 9; w++)
		{
			d = (i * w);
			if ((d/10) > 0)
			{
				_putchar((d / 10)
						}
						else
						{
						_putchar(' ');
						}
						_putchar((d % 10) + '0');

						if (w < 9
							{
							_putchar(',');
							_putchar(' ');
							}
							}
							_putchar('\n');
}
}
