#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - a function that adds a new node at the beginning
 *            of a list_t list
 * @head: the addres of p to head node
 * @str: a string to add in the node
 *
 * Return:the head
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *HEAD_NEW;

	while (str[len])
		len++;

	HEAD_NEW = malloc(sizeof(list_t));
	if (!HEAD_NEW)
		return (0);

	HEAD_NEW->str = strdup(str);
	HEAD_NEW->len = len;
	HEAD_NEW->next = (*head);
	(*head) = HEAD_NEW;

	return (*head);
}
