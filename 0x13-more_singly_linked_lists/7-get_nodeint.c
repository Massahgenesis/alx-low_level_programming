#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns the nth node of a list.
 * @head: A pointer to the head of a list.
 * @index: The index of the node, starting at 0.
 *
 *  Return: The node or NULL if the node doesn't exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}
