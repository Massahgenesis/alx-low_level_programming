#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Function that returns a pointer.
 * @str: Function's parameter.
 * Return: s
 */

char *_strdup(char *str)
{
	char *c;
	unsigned int i, k;

	if (str == 0)
	{
	return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
	;
	i++;
	}
	c = malloc((i + 1) * sizeof(char));
	if (c == NULL)
	{
	return (NULL);
	}
	for (k = 0; k < i; k++)
	{
	c[k] = str[k];
	}
	return (c);
}
