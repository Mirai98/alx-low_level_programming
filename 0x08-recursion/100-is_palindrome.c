#include "main.h"

/**
 *is_palindrome - a function that returns 1 if a string
 *                 is a palindrome and 0 if no
 *@s: pointer the string
 *@A:int
 *@B:int
 *
 * Return: 1 OR 0
 */

int check(char *s, int A, int B);
int strlen_recursion(char *s);

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check(s, 0, strlen_recursion(s)));
}

/**
 *strlen_recursion - returns the length of a string
 *@s: string to calculate the length of
 *@A:int
 *@B:int
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
 *check - checks the characters recursively for palindrome
 *@s: string to check
 *@A:int
 *B:int
 *
 *Return: 1 or 0
 */
int check(char *s, int A, int B)
{
	if (*(s + A) != *(s + B - 1))
		return (0);
	if (A >= B)
		return (1);
	return (check(s, A + 1, len - 1));
}
