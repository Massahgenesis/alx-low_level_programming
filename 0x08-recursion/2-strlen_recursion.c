#include "main.h"

/**
 *_strlen_recursion - Function that returns the length of a string
 *@s: An integer
 *Return:len
 */

int _strlen_recursion(char *s)
{
int len;
len = 0;
if (*s)
{
len++;
len = len + _strlen_recursion(s + 1);
}
return (len);
}
