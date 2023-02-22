#include "main.h"

/**
* void -keyword in c program specifies that the function doesn't return a value
* print_alphabet - A c program that prints alphabets from a to z
*/

void print_alphabet(void)
{

/* ASCII value of a=97 and z=122 */

int i;
i = 97;
while (i <= 122)
{
_putchar(i);
i++;
}
_putchar(10);
}
