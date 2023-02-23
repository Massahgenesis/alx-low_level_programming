#include "main.h"

/**
*_isupper - Function that checks for uppercase character
*@c: An integer
*Return: 1 or 0
*/

int _isupper(int c)
{
if (c <= 90 && c >= 65)
return (1);
return (0);
}
