#include "lists.h"

/**
 * listint_len - a function that returns the number
 *           of elements in a linked listint_t list.
 * @h: pointer
 *
 * Return: size
 */
size_t listint_len(const listint_t *h)
{
	size_t N = 0;

	while (h)
	{
		N++;
		h = h->next;
	}

	return (N);
}
