#include "main.h"
#include <stddef.h>

/**
 * _strchr - Function that locates a character in a string.
 * @s: Function's parameter.
 * @c: Function's parameter..
 * Return: c or Null
 */

char *_strchr(char *s, char c)
	{

	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
	}
