#include "main.h"
/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s:string
 * @accept: input
 * Return: to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
		int v;

		while (*s)
		{
			for (v = 0; accept[v]; v++)
			{
			if (*s == accept[v])
			return (s);
			}
		s++;
		}

	return ('\0');
}
