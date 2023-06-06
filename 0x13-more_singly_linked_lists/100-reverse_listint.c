#include "lists.h"

/**
 * reverse_listint -  a function that reverses a linked list.
 * @head: pointer to pointer head
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *P = 0;
	listint_t *N = P;

	while (*head)
	{
		N = (*head)->N;
		(*head)->N = P;
		P = *head;
		*head = N;
	}

	*head = P;

	return (*head);
}
