#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars,
 *                and initializes it with a specific char
 * @size: size of the array
 * @c: char to initialize
 *
 * Return: pointer to array, NULL if fail
 *
 */

char *create_array(unsigned int size, char c)
{
	char *S;
	unsigned int i;

	S = malloc(sizeof(char) * size);

	if (size == 0 || S == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		S[i] = c;

	return (S);
}
