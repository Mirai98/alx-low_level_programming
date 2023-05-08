#include "main.h"
/**
 * print_chessboard - a function that prints the chessboard
 * @a: array
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int A;
	int S;

	for (A = 0; A < 8; A++)
	{
		for (S = 0; S < 8; S++)
			_putchar(a[A][S]);
		_putchar('\n');
	}
}
