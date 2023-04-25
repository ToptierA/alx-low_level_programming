#include <stdarg.h>

/**
 * sum_them_all - Computes the sum of a variable number of arguments.
 * @n: The number of arguments to sum.
 *
 * Return: The sum of the arguments.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list args;

	va_start(args, n);

	for (; i < n; i++)
	{
		int arg = va_arg(args, const int);

		sum += arg;
	}

	va_end(args);

	return (sum);
}
