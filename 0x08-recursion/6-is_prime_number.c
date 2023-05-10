#include "main.h"

/**
 * is_prime_number - says if an integer is a prime number or not
 *@n: int
 *@Z: int
 *
 * Return: 1 or 0
 */

int actual_prime(int n, int Z);

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @n: int
 * @Z: int
 *
 * Return: 1 or 0
 */
int actual_prime(int n, int Z)
{
	if (Z == 1)
		return (1);
	if (n % Z == 0 && Z > 0)
		return (0);
	return (actual_prime(n, Z - 1));
}
