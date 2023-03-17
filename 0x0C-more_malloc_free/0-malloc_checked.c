#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - Function that allocates memory using malloc
 *@b: An integer
 *Return: A status value of 98
 */

void *malloc_checked(unsigned int b)
{
void *a;
a = malloc(b);
if (a == NULL)
{
exit(98);
}
return (a);
}
