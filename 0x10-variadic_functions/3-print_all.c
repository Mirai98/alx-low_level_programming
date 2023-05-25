#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - a function that prints anything
 * @format: format string
 *
 *return : void
 */
void print_all(const char * const format, ...)
{
	int j = 0;
	char *se_p = "";
	char *st_r;
	va_list ap;

	va_start(ap, format);

	if (format)
	{
		while (format[j])
		{
			switch (format[j])
			{
				case 'c':
					printf("%s%c", se_p, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", se_p, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", se_p, va_arg(ap, double));
					break;
				case 's':
					st_r = va_arg(ap, char *);
					if (!st_r)
						st_r = "(nil)";
					printf("%s%s", se_p, st_r);
					break;
				default:
					j++;
					continue;
			}
			se_p = ", ";
			j++;
		}
	}

	printf("\n");
	va_end(ap);
}
