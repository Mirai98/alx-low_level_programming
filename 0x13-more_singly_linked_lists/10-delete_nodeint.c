#include "lists.h"

/**
 * delete_nodeint_at_index -  a function that deletes the node
 *                   at index index of a listint_t linked list.
 * @head: pointer to ponter head
 * @index: index
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *m = *head;
	listint_t *C = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(m);
		return (1);
	}

	while (j < index - 1)
	{
		if (!m || !(m->next))
			return (-1);
		m = m->next;
		j++;
	}

	C = m->next;
	m->next = C->next;
	free(C);

	return (1);
}
