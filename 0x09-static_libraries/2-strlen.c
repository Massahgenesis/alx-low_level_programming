#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strlen - Function that returns the length of a string.
 * @s: Function's parameter.
 * Return: The length.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
