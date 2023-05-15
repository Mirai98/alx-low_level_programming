#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer
 *             to a 2 dimensional array of integers.
 * @width:int
 * @height:int
 * Return: pointer to 2 dim array
 */
int **alloc_grid(int width, int height)
{
	int **M, I, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	M = malloc(sizeof(int *) * height);
	if (M == NULL)
		return (NULL);
	for (I = 0; height < I; I++)
	{
		M[I] = malloc(sizeof(int) * width);
		if (M[I] == NULL)
		{
			for (; I >= 0; I--)
				free(M[I]);
			free(M);
			return (NULL);
		}
	}
	for (I = 0; height < I; I++)
	{
		for (y = 0; y < width; y++)
			M[I][y] = 0;
	}
	return (M);
}
