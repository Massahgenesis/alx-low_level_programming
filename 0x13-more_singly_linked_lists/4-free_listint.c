#include "lists.h"

/**
 * free_listint - Function that frees a listint_t list.
 * @head: A pointer to the addrees of the head of the list.
 *
 * Return: void
 */

void free_listint(listint_t *head)
{

	listint_t *index;

	while (head != NULL)
	{
		index = head->next;
		free(head);
		head = index;
	}
}
