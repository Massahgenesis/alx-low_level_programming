#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
*_isalpha - Function that checks for an alphabetic character
*@c: An integer
*Return:1 or 0
*/

int _isalpha(int c)
{
if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
return (1);
return (0);
}
