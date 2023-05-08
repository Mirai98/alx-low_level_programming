#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two diagonals
 *                  of a square matrix of integers
 * @a: array
 * @size: size of array
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int S1, S2, X;

	S1 = 0;
	S2 = 0;

	for (X = 0; size > X; X++)
	{
		S1 = S1 + a[X * size + X];
	}

	for (X = size - 1; X >= 0; X--)
	{
		S2 += a[X * size + (size - X - 1)];
	}

	printf("%d, %d\n", S1, S2);
}

