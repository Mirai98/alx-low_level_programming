#include "main.h"

/**
 * binary_to_uint - a function that converts a
 *                 binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int N = 0;
	int j;

	if (!b)
		return (NULL);

	for (i = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (NULL);
		N = 2 * N + (b[j] - '0');
	}

	return (N);
}
