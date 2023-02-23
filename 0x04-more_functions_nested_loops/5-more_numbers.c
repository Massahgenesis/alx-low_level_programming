#include <stdio.h>
#include "main.h"

/**
*more_numbers - Function that prints more nummbers
*
*/

void more_numbers(void)
{
int i;
int b = 0;
while (b < 10)
{
i = 0;
while (i <= 14)
{
if (i >= 10)
{
_putchar((i / 10) + '0');
}
_putchar((i % 10) + '0');
i++;
}
b++;
_putchar(10);
}
}
