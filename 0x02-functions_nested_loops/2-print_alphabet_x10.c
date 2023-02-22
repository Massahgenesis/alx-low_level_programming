#include "main.h"

/**
 * print_alphabet_x10 - A c program that prints alphabet x10 in lowercase
 */

void print_alphabet_x10(void)
{

/* ASCII value of a=97 and z=122 */

int i;
int b = 0;
while (b < 10)
{
i = 97;
while (i <= 122)
{
_putchar(i);
i++;
}
b++;
_putchar(10);
}
}
