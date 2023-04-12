#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *add_nodeint - Function that adds a new node at the beginning of a list
 *@head: Apointer to head
 *@n: An integer
 *Return: The address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = (malloc(sizeof(listint_t)));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	if (*head == NULL)
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}
	else
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}
	return (*head);
}
