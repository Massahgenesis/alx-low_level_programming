#include "main.h"
/**
 * _puts_recursion - Function that prints a string.
 * @s: A parameter of the function.
 *
 * Return: void
 */
void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar(*s);
		return;

	}
	_putchar(*s);
	s++;
	_puts_recursion(s);

}
