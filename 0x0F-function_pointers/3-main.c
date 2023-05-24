#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - the result of simple operations
 * @argc: The arguments c
 * @argv: the argument v
 *
 * Return: Always 0.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int n1, n2;
	char *opf;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	opf = argv[2];
	n2 = atoi(argv[3]);

	if (get_op_func(opf) == NULL || opf[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*opf == '/' && n2 == 0) ||
	    (*opf == '%' && n2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(opf)(n1, n2));

	return (0);
}
