#include "lists.h"
#include <stdio.h>

/**
 * print_list - Function that prints all the elements.
 * @h: The list
 * Return: The number of node.
 */

size_t print_list(const list_t *h)
{
	int node;

	node = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
			node++;
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			node++;
			h = h->next;
		}
	}
	return (node);
}
