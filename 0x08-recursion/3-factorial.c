#include "main.h"

/**
 *factorial - Function that returns the factorial of a given number
 *@n: An integer
 *Return:1 or -1
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (1);
}
return (n * factorial(n - 1));
}
