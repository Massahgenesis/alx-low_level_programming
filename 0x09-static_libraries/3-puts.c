#include "main.h"

/**
 * _puts - Function that prints a string.
 * @str: Functions parameter.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
