#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  5  * *_realloc - a function that reallocates a memory block using malloc and free
  6  * @ptr: pointer to the memory previsouly allocated by malloc
  7  * @old_size: size of bytes of the allocated memory for ptr
  8  * @new_size: new size of bytes of the new memory block
  9  *
 10  * Return: pntr or NULL
 11  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	free(ptr);
	return (NULL);
}
if (new_size == old_size)
{
	return (ptr);
}

if (new_ptr == NULL)
{
	return (NULL);
    }
unsigned int min_size = (old_size < new_size) ? old_size : new_size;
emcpy(new_ptr, ptr, min_size);
return (new_ptr);
}
