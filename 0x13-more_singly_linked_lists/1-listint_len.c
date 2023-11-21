#include "lists.h"
#include <stdio.h>

/**
 *listint_len - Function that returns the number of elements in a linked list
 *@h: The list_t list
 *Return: The number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
