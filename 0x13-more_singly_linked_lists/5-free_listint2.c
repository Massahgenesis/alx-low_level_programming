#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_listint2 - Function that frees list
 *@head: A pointer to head
 */

void free_listint2(listint_t **head)
{
	listint_t *i;

	i = NULL;
	free(*head);
	*head = i;
}
