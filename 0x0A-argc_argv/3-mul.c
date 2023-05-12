#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string
 *
 * Return: n
 */
int _atoi(char *s)
{
	int I, M, n, len, F, digit;

	I = 0;
	M = 0;
	n = 0;
	len = 0;
	F = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (len > I  && F == 0)
	{
		if (s[I] == '-')
			++d;

		if (s[I] >= '0' && s[I] <= '9')
		{
			digit = s[I] - '0';
			if (M % 2)
				digit = -digit;
			n = n * 10 + digit;
			F = 1;
			if (s[I + 1] < '0' || s[I + 1] > '9')
				break;
			F = 0;
		}
		I++;
	}

	if (F == 0)
		return (0);

	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 IF Success, 1 IF Error
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
