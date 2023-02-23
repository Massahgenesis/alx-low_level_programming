#include "main.h"

/**
*print_line - Function that checks for uppercase character
*@n: An integer
*Return:0
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
