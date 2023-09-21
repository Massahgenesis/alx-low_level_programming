#include "main.h"

/**
 * _puts_recursion - Function that prints a string.
 * @s - A parameter of the function.
 *
 */
void _puts_recursion(char *s){

	if (*s =='\0')
	{
		return;	

	}
	_putchar(*s);
	s++;
	_puts_recursion(s);

}

