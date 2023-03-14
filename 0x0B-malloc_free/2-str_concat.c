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
int i;
int j;
int len;
j = 0;
len = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
{
s2 = "";
}
for (i = 0; s1[i] || s2[i]; i++)
;
len++;
s3 = malloc((sizeof(char)) * len);
if (s3 == NULL)
{
return (NULL);
}
for (i = 0; s1[i]; i++)
{
s3[j++] = s1[i];
}
for (i = 0; s2[i]; i++)
{
s3[j++] = s2[i];
}
return (s3);
}


