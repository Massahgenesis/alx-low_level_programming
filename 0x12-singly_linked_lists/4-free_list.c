#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Function that frees a list_t list.
 * @head: Function's parameter.
 * return: void
 */

void free_list(list_t *head)
{
	list_t *i;

	while (head)
	{
		i = head->next;
		free(head->str);
		free(head);
		head = i;
	}
}
