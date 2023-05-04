#include "main.h"

/**
 * _strcat - concatenates two strings
 *@dest: pointer to destination input
 *@src: pointer to source  input
 *
 * Return: to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	i = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';
	return (dest);
}
