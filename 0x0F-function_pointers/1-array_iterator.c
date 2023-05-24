#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - a function that executes a function given
 *              as a parameter on each element of an array
 * @name: string name
 * @f: pointer to function
 * Return: void
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
