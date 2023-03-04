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
while (s1[i] == s2[i])
{
i++;
}
result = _strcmp(s1, s2);
if (result < 0)
{
return (-1);
}
else if (result > 0)
{
return (1);
}
else
{
return (0);
}
}
