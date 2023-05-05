#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you need to flip
 * @n: a given number
 * @m: a given number
 *
 * Return: number of bits you need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int sum;
	unsigned long int xor;

	sum = 0;
	xor = n ^ m;
	while (xor)
	{
		sum += xor & 1;
		xor = xor >> 1;
	}

	return (sum);
}
