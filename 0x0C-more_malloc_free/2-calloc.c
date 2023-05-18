#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *_calloc - a function that allocates memory for an array
 * @nmemb: n of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	void *P = malloc(nmemb * size);

	if (P == NULL)

	{
		return (NULL);
	}
	memset(P, 0, nmemb * size);

	return (P);
}
