#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s: pointer
 * @c: constant
 * Return: to the first occurrence of the character c in the string s, or NULL
 */
char *_strchr(char *s, char c)
{
	int e = 0;

	for (; s[e] >= '\0'; e++)
	{
		if (s[e] == c)
			return (&s[e]);
	}
	return (0);
}
