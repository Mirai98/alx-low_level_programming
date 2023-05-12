#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int N1 = 0, N2 = 0;

	if (argc == 3)
	{
			N1 = atoi(argv[1]);
			N2 = atoi(argv[2]);
			printf("%d\n", N1 * N2);
			}
	else
		{
			printf("Error\n");
			return (1);
			}


	return (0);
}
