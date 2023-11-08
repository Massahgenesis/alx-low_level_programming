#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Function prints name.
 * @name: A pointer.
 * @f: A pointer.
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
	return;
	}
	f(name);
}
