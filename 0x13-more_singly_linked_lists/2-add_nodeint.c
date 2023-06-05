#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the
 *                    beginning of a listint_t list.
 * @head: the pointer to the first head  node
 * @n: new nude value
 *
 * Return: the pointer to the new node or 0
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *N_node;

	N_node = malloc(sizeof(listint_t));
	if (!N_node)
		return (0);

	N_node->n = n;
	N_node->next = *head;
	*head = N_node;

	return (N_node);
}
