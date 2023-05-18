#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 * @s: char
 * @b: char
 * @n: int
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - a function that allocates memory for an array
* @nmemb: n of elements in the array
* @size: size of each element
*
* Return: pointer to allocated memory or NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *P;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (P == NULL)
		return (NULL);

	_memset(P, 0, nmemb * size);

	return (P);
}
