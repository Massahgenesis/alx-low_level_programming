#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *create_array - Function that  creates an array of char
 *@size: An integer
 *@c: An integer
 *Return:array
 */

char *create_array(unsigned int size, char c)
{
char *a;
unsigned int i;
if (size == 0)
{
return (NULL);
}
a = malloc(size * sizeof(char));
if (a == NULL)
{
return (NULL);
}
i = 0;
while (i < size)
{
i++;
a[i] = c;
}
return (a);
}
