#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
*_islower - Function that test lowercase letter
*@c: - A variable to hold our test letter
*Return:1 or 0
*/

int _islower(int c)
{
if (c <= 122 && c >= 97)
return (1);
return (0);
}
