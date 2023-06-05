#include "lists.h"

/**
 * add_nodeint_end -  a function that adds a new node
 *                   at the end of a listint_t list.
 * @head: the pointer to the first nde
 * @n: new node value
 *
 * Return: the pointer to the new node or 0
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *N_node;
	listint_t *temp = *head;

	N_node = malloc(sizeof(listint_t));
	if (!N_node)
		return (NULL);

	N_node->n = n;
	N_node->next = NULL;

	if (*head == NULL)
	{
		*head = N_node;
		return (N_node);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (N_node);
}
