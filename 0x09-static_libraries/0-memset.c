#include "main.h"
/**
 * _memset -Write a function that fills memory with a constant byte
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be used
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int q = 0;

	for (; n > 0; q++)
	{
		s[q] = b;
		n--;
	}
	return (s);
}
