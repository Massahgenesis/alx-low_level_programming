#include "main.h"
#include <stddef.h>

/**
 *_strpbrk - Function that searches a string for any of a set of bytes
 *@s: An integer
 *@accept: An integer
 *Return: accept or NULL
 */

char *_strpbrk(char *s, char *accept)
{
int i;
int j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept [j])
{
return (s + i);
}
}
}
return (NULL);
}
