#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*print_most_numbers - Function that prints the most numbers with exception
*void - keyword in c program specifies that the function doesn't return a value
*/

void print_most_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
if (i != 2 && i != 4)
{
_putchar(i + '0');
}
}
_putchar(10);
}
