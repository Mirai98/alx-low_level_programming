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
	list_t *headnew;
	unsigned int j = 0;

	while (str[j])
		j++;

	headnew = malloc(sizeof(list_t));
	if (!headnew)
		return (NULL);

	headnew->str = strdup(str);
	headnew->j = j;
	headnew->next = (*head);
	(*head) = headnew;

	return (*head);
}
