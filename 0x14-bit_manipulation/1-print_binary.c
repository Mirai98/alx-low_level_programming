#include "main.h"

/**
 * print_binary - a function that prints the binary
 *               representation of a number.
 * @n: binary number
 *
 *return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int R;
	int j;
	int C = 0;

	for (j = 63; j >= 0; j--)
	{
		R = n >> j;

		if (R & 1)
		{
			_putchar('1');
			C++;
		}
		else if (C)
			_putchar('0');
	}
	if (!C)
		_putchar('0');
}
