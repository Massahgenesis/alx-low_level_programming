#include "lists.h"

/**
 * free_listint2 - Function that frees a list.
 * @head: A pointer to the address of the head of the list.
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{

	listint_t *freeList;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		freeList = (*head)->next;
		free(*head);
		*head = freeList;
	}
	head = NULL;
}
