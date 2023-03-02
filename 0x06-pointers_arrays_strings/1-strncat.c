#include <string.h>
#include "main.h"

/**
 *_strncat - Function that concatenates two strings
 *@dest: An integer
 *@src: An integer
 *@n: An integer
 *Return:dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0, k = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
j++;
}
for (k = 0; k < n; k++)
{
*(dest + k + i) = *(src + n);
}
for (k = 0; k < j; k++)
{
*(dest + k + 1) = *(src + k);
}
*(dest + k + i + 1) = '\0';
return (dest);
}
