#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - a function that adds a new node at the beginning
 *            of a list_t list
 * @head: the addres of p to head node
 * @str: a string to add in the node
 *
 * Return: head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *head_new;
	unsigned int i = 0;

	while (str[i])
		i++;

	head_new = malloc(sizeof(list_t));
	if (!head_new)
		return (NULL);

	head_new->str = strdup(str);
	head_new->i = i;
	head_new->next = (*head);
	(*head) = head_new;

	return (*head);
}
