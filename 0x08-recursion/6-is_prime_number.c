#include "main.h"

/**
 *prime - Determine prime number
 *@a: An integer
 *@b: ANinteger
 *Return: prime or 0
 */

int prime(int a, int b)
{
if (b < 2 || b % a == 0)
{
return (0);
}
else if (a > b / 2)
{
return (1);
}
else
{
return (prime(b + 1, a));
}
}

/**
 *is_prime_number - Function that returns the prime number
 *@n: An integer
 *Return:1 or 0
 */



int is_prime_number(int n)
{
if (n == 2)
{
return (0);
}
return (prime(2, n));
}
