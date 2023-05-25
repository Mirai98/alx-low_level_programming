#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: separator string
 * @n: The number of strings
 * @...: strings to be printed.
 *
 * return : void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *st_r;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		st_r = va_arg(ap, char *);

		if (st_r == NULL)
			printf("(nil)");
		else
			printf("%s", st_r);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(ap);
}
