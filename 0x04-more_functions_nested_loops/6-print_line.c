#include "main.h"

/**
*print_line - Function that prints line
*@n: An integer
*/

void print_line(int n)
{
int i;
i = 0;
if (n > 0)
{
while (i <= n)
{
_putchar('_');
i++;
}
_putchar('\n');
}
else
_putchar('\n');
}
