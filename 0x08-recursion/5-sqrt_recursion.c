#include "main.h"

/**
 * _sqrt_recursion - a function that returns
 *                   the natural square root of a number
 * @n: it to find square root
 *@A: square root
 * Return: the resulting square root
 */

int actual_sqrt_recursion(int n, int A);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 *                          square root of a number
 * @n : it to find square root
 * @A: square root
 *
 * Return: the resulting square root
 */

int actual_sqrt_recursion(int n, int A)
{
	if (A * A > n)
		return (-1);
	if (A * A == n)
		return (A);
	return (actual_sqrt_recursion(n, A + 1));
}
