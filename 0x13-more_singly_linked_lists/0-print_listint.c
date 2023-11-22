#include "lists.h"
#include <stdio.h>


/**
 * print_listint - Function that prints all the elements of a listint_t list.
 * @h: The listint list.
 * Return: nodes
 *
 */

size_t print_listint(const listint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
