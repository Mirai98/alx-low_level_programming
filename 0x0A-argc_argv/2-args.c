#include <stdio.h>

/**
 * main - a program that prints all arguments it receives
 * @argc: number of arguments
 * @argv: list
 *
 * Return:0
 */

int main(int argc, char *argv[])
{
	int A;

	for (A = 0; argc > A; A++)
	{
		printf("%s\n", argv[A]);
	}

	return (0);
}
