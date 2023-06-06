#include "lists.h"

/**
 * free_listint_safe -a function that frees a listint_t list.
 * @h: pointer to pointer
 *
 * Return:the  number of elements in freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int D;
	listint_t *m;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		D = *h - (*h)->next;
		if (D > 0)
		{
			m = (*h)->next;
			free(*h);
			*h = m;
			len++;
		}
		else
		{
			free(*h);
			*h = 0;
			len++;
			break;
		}
	}

	*h = 0;

	return (len);
}
