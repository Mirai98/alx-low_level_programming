#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory area
 *@src: source memory
 *@n: number of bytes
 *
 *Return:to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int q = n;

	for (; a < q; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
