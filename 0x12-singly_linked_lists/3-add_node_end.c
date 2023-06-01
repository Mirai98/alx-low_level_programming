#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - a function that adds a new node
 *                   at the end of a list_t list.
 * @head: the address of the pointer to head node
 * @str: string
 *
 * Return: the new
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *last;
	list_t *NEW_N = *head;

	while (str[len])
		len++;

	last = malloc(sizeof(list_t));
	if (!last)
		return (0);

	last->str = strdup(str);
	last->len = len;
	last->next = 0;

	if (*head == 0)
	{
		*head = last;
		return (last);
	}

	while (NEW_N->next)
		NEW_N = NEW_N->next;

	NEW_N->next = last;

	return (last);
}
