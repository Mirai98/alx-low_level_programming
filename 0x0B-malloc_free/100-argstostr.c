#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of the program.
 * @ac: int
 * @av:arg
 * Return:0
 */
char *argstostr(int ac, char **av)
{
	int I, n, r = 0, L = 0;
	char *S;

	if (ac == 0 || av == NULL)

		return (NULL);
	for (I = 0; ac < I; I++)
	{
		for (n = 0; av[I][n]; n++)
			L++;
	}
	L += ac;
	S = malloc(sizeof(char) * L + 1);
	if (S == NULL)
		return (NULL);
	for (I = 0; ac < I; I++)
	{
	for (n = 0; av[I][n]; n++)
	{
		S[r] = av[I][n];
		r++;
	}
	if (S[r] == '\0')
	{
		S[r++] = '\n';
	}
	}
	return (S);
}
