#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - a function that returns a pointer
*             to a 2 dimensional array of integers.
* @width:int
* @height:int
* Return: pointer to 2 dimensional array
*/
int **alloc_grid(int width, int height)
{
	int **M;
	int i, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	M = malloc(sizeof(int *) * height);

	if (M == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		M[i] = malloc(sizeof(int) * width);

		if (M[i] == NULL)
		{
			for (; i >= 0; i--)
				free(M[x]);

			free(M);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (y = 0; y < width; y++)
			M[i][y] = 0;
	}

	return (M);
}
