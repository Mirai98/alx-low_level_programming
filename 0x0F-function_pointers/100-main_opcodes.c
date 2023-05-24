#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the opcodes of its own main function
 * @argc: argument c
 * @argv : argument v
 *
 * Return: Always 0 with Success
 */
int main(int argc, char *argv[])
{
	int byt;
	int j;
	char *ar;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byt = atoi(argv[1]);

	if (byt < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ar = (char *)main;

	for (j = 0; j < byt; j++)
	{
		if (j == byt - 1)
		{
			printf("%02hhx\n", arr[j]);
			break;
		}
		printf("%02hhx ", ar[j]);
	}
	return (0);
}
