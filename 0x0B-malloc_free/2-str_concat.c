#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *str_concat - Function that concatenates two strings
 *@s1: An integer
 *@s2: An integer
 *Return: s3
 */
char *str_concat(char *s1, char *s2)
{
char *s3;
int i, j, c, len;
c = 0, len = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
{
s2 = "";
}
for (i = 0; s1[i] != '\0'; i++)
{
len++;
}
for (j = 0; s2[j] != '\0'; j++)
{
len++;
}
s3 = malloc(sizeof(char) * len);
if (s3 == NULL)
{
return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
{
s3[c] = s1[i];
c++;
}
for (i = 0; s2[i] != '\0'; i++)
{
s3[c] = s2[i];
c++;
}
return (s3);
}
