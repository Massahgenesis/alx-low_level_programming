#include "main.h"

/**
 * _strlen_recursion - Function that writes the lenght of a string.
 * @s: Function's parameter.
 * Return: The value.
 */

int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (*s)
	{
		len++;
		len = len + _strlen_recursion(s + 1);
	}
	return (len);
}
