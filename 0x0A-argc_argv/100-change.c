#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - a program that prints the minimum number
 *      of coins to make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if Success , 1 if Error
 */
int main(int argc, char *argv[])
{
	int n, j, r;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	r = 0;

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && n >= 0; j++)
	{
		while (n >= coins[j])
		{
			r++;
			n -= coins[j];
		}
	}

	printf("%d\n", r);
	return (0);
}
