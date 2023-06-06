#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: head
 *
 *return : void
 */
void free_listint2(listint_t **head)
{
	listint_t *m;

	if (head == NULL)
		return;

	while (*head)
	{
		m = (*head)->next;
		free(*head);
		*head = m;
	}

	*head = 0;
}
