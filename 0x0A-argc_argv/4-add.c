#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * check_n - check - string there are digit
 * @str: array str
 *
 * Return: 0
 */
int check_n(char *str)
{
	unsigned int c;

	c = 0;
	while (c < strlen(str))

	{
		if (!isdigit(str[c]))
		{
			return (0);
		}

		c++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return:0
 */

int main(int argc, char *argv[])

{
	int c;
	int str_to_int;
	int sum = 0;

	c = 1;
	while (c < argc)
	{
		if (check_n(argv[c]))

		{
			str_to_int = atoi(argv[c]);
			sum += str_to_int;
		}

		else
		{
			printf("Error\n");
			return (1);
		}

		c++;
	}

	printf("%d\n", sum);

	return (0);
}
