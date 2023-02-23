#include <stdio.h>
#include "main.h"

/**
*print_numbers - Function that that prints the numbers
*void - keyword in c program specifies that the function doesn't return a value
*/

void print_numbers(void)
{
int i;
i = 48;
while (i <= 57)
{
_putchar(i);
i++;
}
_putchar(10);
}
