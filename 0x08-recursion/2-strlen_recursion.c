#include "main.h"

/**
 * _strlen_recursion -  a function that returns the length of a string
 * @s: The string to be measured.
 *
 * Return: A
 */

int _strlen_recursion(char *s)
{
	int A = 0;

	if (*s)
	{
		A++;
		A += _strlen_recursion(s + 1);
	}

	return (A);
}
