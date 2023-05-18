#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - a function that concatenates two strings
 * @s1: pointer for the firt string
 * @s2: pointer for the 2nd  string
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *S;
	unsigned int i = 0, j = 0;
	unsigned int l1 = 0, l2 = 0;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;

	if (n < l2)
		S = malloc(sizeof(char) * (l1 + n + 1));
	else
		S = malloc(sizeof(char) * (l1 + l2 + 1));

	if (!S)
		return (NULL);

	while (i < l1)
	{
		S[i] = s1[i];
		i++;
	}

	while (n < l2 && i < (l1 + n))
		S[i++] = s2[j++];

	while (n >= l2 && i < (l1 + l2))
		S[i++] = s2[j++];

	S[i] = '\0';

	return (S);
}
