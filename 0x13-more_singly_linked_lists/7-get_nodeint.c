#include "lists.h"

/**
 * get_nodeint_at_index -  a function that returns the
 *                       nth node of a listint_t linked list.
 * @head: head node
 * @index: the index of the node
 *
 * Return: pointer to the node, or 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *m = head;

	while (m && j < index)
	{
		m = m->next;
		j++;
	}

	return (m ? m : 0);
}
