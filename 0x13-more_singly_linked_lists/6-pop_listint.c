#include "lists.h"

/**
 * pop_listint - Fuction that deletes the head node of a list.
 * @head: A focntion to the address of the head of the list.
 *
 * Return: The head node's dta.
 */

int pop_listint(listint_t **head)
{

	listint_t *node;
	int new;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		node = *head;
		new = (*head)->n;
		*head = (*head)->next;
	}
	free(node);
	return (new);
}
