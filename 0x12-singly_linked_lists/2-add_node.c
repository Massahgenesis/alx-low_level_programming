#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - Function that print the length of a string.
 * @string: Function's parameter.
 * Return: The length.
 */

int _strlen(const char *string)
{
	int len;

	for (len = 0; string[len] != '\0'; len++)
	{
	;
	}
	return (len);
}
/**
 * add_node - Function that adds a new node.
 * @head: Function's parameter.
 * @str: Function's parameter.
 * Return: The new address or Null.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = (malloc(sizeof(list_t)));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	if (*head == NULL)
	{
		new->next = *head;
		new->str = strdup(str);
		new->len = _strlen(str);
		*head = new;
	}
	else
	{
		new->next = *head;
		new->str = strdup(str);
		new->len = _strlen(str);
		*head = new;
	}
	return (*head);
}
