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
	list_t *H_new;
	unsigned int i = 0;

	while (str[i])
		i++;

	H_new = malloc(sizeof(list_t));
	if (!H_new)
		return (NULL);

	H_new->str = strdup(str);
	H_new->i = i;
	H_new->next = (*head);
	(*head) = H_new;

	return (*head);
}
