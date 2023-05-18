#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - Function to allocate memory using malloc
 * @b: int
 *
 * Return:memory
 */
void *malloc_checked(unsigned int b)
{
	void *memory = malloc(size);

	if (memory == NULL)
		exit(98);

	return (memory);
}
