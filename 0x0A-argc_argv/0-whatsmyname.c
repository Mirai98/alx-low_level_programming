#include <stdio.h>
#include "main.h"

/**
* main - a program that prints its name, followed by a new line
 * @argc: int
 * @argv: list
 *
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	(void)argc;

	printf("%s\n", *argv);

	return (0);
}
