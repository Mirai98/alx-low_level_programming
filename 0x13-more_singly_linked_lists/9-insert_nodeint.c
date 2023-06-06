#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node
 *                             at a given position.
 * @head: head node pointer to pointer
 * @idx: index
 * @n: the  data to insert in the new node
 *
 * Return: teh pointer to the new node, or 0
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *N_node;
	listint_t *m = *head;

	N_node = malloc(sizeof(listint_t));
	if (!N_node || !head)
		return (0);

	N_node->n = n;
	N_node->next = 0;

	if (idx == 0)
	{
		N_node->next = *head;
		*head = N_node;
		return (N_node);
	}

	for (j = 0; m && j < idx; j++)
	{
		if (j == idx - 1)
		{
			N_node->next = m->next;
			m->next = N_node;
			return (N_node);
		}
		else
			m = m->next;
	}

	return (0);
}
