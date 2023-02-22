#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
*_islower - Function that test lowercase letter
*c - A variable to hold our test letter
*/

int _islower(int c)
{
int letter;
letter = c;
if (islower(letter))
{
return (1);
}
else
{
return (0);
}
}
