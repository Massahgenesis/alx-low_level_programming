#include "main.h"

/**
* print_alphabet - A c program that prints alphabet in lowercase
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
