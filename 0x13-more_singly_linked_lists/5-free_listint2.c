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

	freeList = *head;
	while (freeList != NULL)
	{
	i = freeList->next;
	free(freeList);
	freeList = i;
	}
	*head = NULL;
}
