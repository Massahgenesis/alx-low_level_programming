#include "main.h"
#include <string.h>

/**
 *_strcat - Function that adds the string src to the end of the string dest
 *@dest: An integer
 *@src: An integer
 *Return: value dest
 */

char *_strcat(char *dest, char *src)
{
int i;
int j;
int k;
while (i = 0; dest[i] != '\0')
{
i++;
}
while (j = 0; src[j] != '\0')
{
j++;
}
for (k = 0; k < j; k++)
{
*(dest + k + i) = *(src + k);
}
*(dest + k + i + 1) = '\0';
return (dest);
}
