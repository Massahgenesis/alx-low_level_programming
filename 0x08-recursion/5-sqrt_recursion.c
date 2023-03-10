#include "main.h"

/**
 *squart - Checks for squart root of given number
 *@x: An integer
 *@s: An  integer
 *Return:squart or -1
 */

int squart(int x, int s)
{
if (x * x == s)
{
return (x);
}
else if (x * x > s)
{
return (-1);
}
return (squart(x + 1, s));
}


/**
 *_sqrt_recursion - Function that returns the natural square root of a number
 *@n: An integer
 *Return:-1 or 1
 */


int _sqrt_recursion(int n)
{
if (n == 0)
{
return (0);
}
return (squart(1, n));
}
