
#include "main.h"

/**
 * flip_bits - a function that returns the number of bits
 * to get from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j;
	int count = 0;
	unsigned long int xor = n ^ m;
	unsigned long int C;

	for (j = 63; j >= 0; j--)
	{
		C = xor >> j;
		if (C & 1)
			count++;
	}

	return (count);
}
