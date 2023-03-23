#include "main.h"
#include <string.h>

/**
 *_strcmp - Function that compares two strings
 *@s1: An integer
 *@s2: An integer
 *Return:0 or -1 or 1
 */

int _strcmp(char *s1, char *s2)
{
int i;
int result;
result = 0;
i = 0;
while (i >= 0)
{
if (s1[i] == '\0' || s2[i] == '\0')
{
break;
}
else
{
if (s1[i] == s2[i])
{
result = 0;
}
else
{
result = (int)s1[i] - (int)s2[i];
break;
}
}
i++;
}
return (result);
}

