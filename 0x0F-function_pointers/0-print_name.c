#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *print_name - Function that prints name
 *@name: A pointer
 *@f: Apointer
 *Return:void
 */

void print_name(char *name, void (*f)(char *))
{

if (!name || !f)
{
return;
}
f(name);
}
