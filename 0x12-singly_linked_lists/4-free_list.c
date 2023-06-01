#include "lists.h"
#include <stdlib.h>

/**
 * free_list - a function that frees a list_t list.
 * @head: head node
 *
 *return : voide
 */

void free_list(list_t *head)
{
	list_t *After_node;

	while (head)
	{
		After_node = head->next;
		free(head->str);
		free(head);
		head = After_node;
	}
}
