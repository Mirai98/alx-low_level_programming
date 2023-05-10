#include "main.h"

int check(char *s, int I, int L);
int strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 OR 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check(s, 0, strlen_recursion(s)));
}

/**
 * strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + strlen_recursion(s + 1));
}

/**
 * check - checks the characters recursively for palindrome
 * @s: string to check
 * @I: iterator
 * @L: length of the string
 *
 * Return: 1 OR 0
 */
int check(char *s, int I, int L)
{
	if (*(s + I) != *(s + L - 1))
		return (0);
	if (I >= L)
		return (1);
	return (check(s, I + 1, L - 1));
}
