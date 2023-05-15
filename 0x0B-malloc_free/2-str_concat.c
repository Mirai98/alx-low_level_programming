#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: STRING1
 * @s2: STRING2
 * Return:int
 */
char *str_concat(char *s1, char *s2)
{
	int i, C;
	char *B;

	if (s1 == NULL)

		s1 = "";

	if (s2 == NULL)

		s2 = "";

		i = C = 0;

	while (s1[i] != '\0')
		i++;

	while (s2[C] != '\0')
		C++;

	B = malloc(sizeof(char) * (i + C + 1));
	if (B == NULL)

		return (NULL);

	i = C = 0;

	while (s1[i] != '\0')

	{
		B[i] = s1[i];
		i++;
	}
	while (s2[C] != '\0')
	{
		B[i] = s2[C];
		i++, C++;
	}
	B[i] = '\0';
	return (B);
}
