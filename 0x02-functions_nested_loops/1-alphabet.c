#include "main.h"

/**
* void -  keyword in c program specifies that the function doesn't return a value
*/

void print_alphabet(void)
{
char alphabet[26] = "a-z";
int i;
i = 0;
while (i <= 26)
{
_putchar(alphabet[i]);
i++;
}
_puctchar(10);
}
