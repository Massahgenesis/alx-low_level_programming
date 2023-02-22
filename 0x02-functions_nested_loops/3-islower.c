#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
* _islower - A c program that test for lowercase letter  
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
