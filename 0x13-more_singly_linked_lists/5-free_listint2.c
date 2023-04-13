#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_listint2 - Function that frees list
 *@head: A pointer to head
 */

void free_listint2(listint_t **head)
{
	listint_t *freeList, *i;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		freeList = *head;
		i = freeList->next;
		free(freeList);
		*head = i;
	}
	*head = NULL;
}
