#include <stdlib.h>
#include "main.h"

/**
 * *array_range -  a function that creates an array of integers
 * @min: minimum int
 * @max: maximum int
 *
 * Return: p
 */
int *array_range(int min, int max)
{
	int *P;
	int size;
	int j;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	P = malloc(sizeof(int) * size);

	if (P == NULL)
		return (NULL);

	for (j = 0; min <= max; j++)
		P[j] = min++;

	return (P);
}
