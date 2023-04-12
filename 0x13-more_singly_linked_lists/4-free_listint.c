#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_listint - Function that free list
 *@head: A pointer to head
 */

void free_listint(listint_t *head)
{
	listint_t *i;

	while (head)
	{
		i = head->next;
		free(head);
		head = i;
	}
}
