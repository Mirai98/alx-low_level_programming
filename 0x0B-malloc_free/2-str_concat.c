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
	char *c;
	int j, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = ci = 0;
	while (s1[j] != '\0')
		j++;
	while (s2[ci] != '\0')
		ci++;
	c = malloc(sizeof(char) * (j + ci + 1));

	if (c == NULL)
		return (NULL);
	j = ci = 0;
	while (s1[j] != '\0')
	{
		c[j] = s1[j];
		j++;
	}

	while (s2[ci] != '\0')
	{
		c[j] = s2[ci];
		j++, ci++;
	}
	c[j] = '\0';
	return (c);
}
