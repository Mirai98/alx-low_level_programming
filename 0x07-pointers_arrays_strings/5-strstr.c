#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack:
 * @needle: input
 * Return: to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *A = haystack;
		char *N = needle;

		while (*A == *N && *N != '\0')
		{
			A++;
			N++;
		}

		if (*N == '\0')
			return (haystack);
	}

	return (0);
}
