#include "main.h"
#include <stdlib.h>

/**
 *_calloc - Function that allocates memory for an array
 *@nmemb: An integer
 *@size: An integer
 *Return:c
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *c;
c = 0;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
c = malloc(nmemb);
if (c == 0)
{
return (NULL);
}
return (c);
}
