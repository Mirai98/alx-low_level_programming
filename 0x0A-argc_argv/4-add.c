#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers.
 * @argc: n of  arguments
 * @argv: array of pointers to argm
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	char *A;

	while (--argc)
	{
		for (A = argv[argc]; *A; A++)
			if (*A < '0' || *A > '9')
				return (printf("Error\n"), 1);
		sum += atoi(argv[]);
	}
printf("%d\n", sum);

return (0);
}
