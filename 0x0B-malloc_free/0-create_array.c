#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Function that creates an array of chars.
 * @size: Function's parameter.
 * @c: Function's parameter.
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	{
	return (NULL);
	}

	a = malloc(size * sizeof(char));
	if (a == NULL)
	{
	return (NULL);
	}
	i = 0;
	while (i < size)
	{
	a[i] = c;
	i++;
	}
	return (a);
}
