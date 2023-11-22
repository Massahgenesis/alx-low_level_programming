#include "lists.h"

/**
 * add_nodeint_end - Function that aads a new node at the end of a list.
 * @head: A pointer of the address of the head of the list.
 * @n: The integer for the new node.
 *
 * Return: NULL or the address of the new element.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *newNode, *lastNode;

	newNode = (malloc(sizeof(listint_t)));
	if (newNode == 0)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	if (*head == 0)
	{
		*head = newNode;
	}
	else
	{
		lastNode = *head;
		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = newNode;
	}
	return (*head);

}
