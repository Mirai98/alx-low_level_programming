#include "lists.h"

/**
 * sum_listint -  a function that returns the sum of all the
 *                  data (n) of a listint_t linked list.
 * @head: head node in the linked list
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int S = 0;
	listint_t *m = head;

	while (m)
	{
		S += m->n;
		m = m->next;
	}

	return (S);
}
