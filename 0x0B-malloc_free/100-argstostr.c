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
	int i, n, R = 0, la = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			la++;
	}
	la += ac;

	str = malloc(sizeof(char) * la + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (n = 0; av[i][n]; n++)
	{
		str[R] = av[i][n];
		R++;
	}
	if (str[R] == '\0')
	{
		str[R++] = '\n';
	}
	}
	return (str);
}
