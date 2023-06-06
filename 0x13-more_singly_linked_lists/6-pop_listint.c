#include "lists.h"

/**
 * pop_listint - a function that deletes the head node
 *                  of a listint_t linked list
 * @head: the pointer to the head
 *
 * Return: n node
 */
int pop_listint(listint_t **head)
{
	listint_t *m;
	int N;

	if (!head || !*head)
		return (0);

	N = (*head)->n;
	m = (*head)->next;
	free(*head);
	*head = m;

	return (N);
}
