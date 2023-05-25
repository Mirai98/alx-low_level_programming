#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: The number of arg
 * @...: A variable number of sum
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int SUM = 0;
	unsigned int j;

	va_start(ap, n);

	for (j = 0; j < n; j++)
		SUM += va_arg(ap, int);

	va_end(ap);

	return (SUM);
}
