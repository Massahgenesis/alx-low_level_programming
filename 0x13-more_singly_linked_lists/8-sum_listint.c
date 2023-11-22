#include "lists.h"

/**
 * sum_listint - Function that returns the sum of all the data (n) of a list.
 * @head: A pointer to the head of the list.
 *
 * Return: 0 if the list is empty or the sum.
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
