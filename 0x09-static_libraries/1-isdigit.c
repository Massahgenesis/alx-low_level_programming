#include<stdio.h>
#include "main.h"

/**
*_isdigit - Function that checks for a digit
*@c: An integer
*Return: 1 or 0
*/

int _isdigit(int c)
{
if (c <= 57 && c >= 48)
return (1);
return (0);
}
