#include "main.h"

/**
 *_strncpy - Function that copies the string
 *@dest: An integer
 *@src: An integer
 *@n: An integer
 *Return:dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';
return (dest);
}
