#include "lists.h"

/**
 * add_nodeint - Function that adds a new node at the beginning of a list.
 * @head: A pointer to the addrees of the head of the list.
 * @n: The integer for the new node.
 *
 * Return: Null or the address of the new node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t  *node;

	node = (malloc(sizeof(listint_t)));
	if (node == 0)
	{
		free(node);
		return (NULL);
	}
	else
	{
		node->n = n;
		node->next = *head;
		*head = node;
	}

	return (node);
}
