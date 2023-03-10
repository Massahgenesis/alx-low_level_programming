#include "main.h"

/**
 *_memcpy - Function that copies memory area
 *@dest: An integer
 *@src: An integer
 *@n: An integer
 *Return:dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
