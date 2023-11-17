#include "lists.h"
#include <stdio.h>

/**
 * list_len - Function that returns the number of elements.
 * @h: The list.
 * Return: The nomber of elements.
 */
size_t list_len(const list_t *h)
{
	int node;

	node = 0;
	while (h != NULL)
	{
		node++;
		h = h->next;
	}
	return (node);
}
