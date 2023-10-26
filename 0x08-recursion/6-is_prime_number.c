#include "main.h"

/**
 * prime - Function that determines the prime number.
 * @i: Function's parameter
 * @j: Function's parameter
 * Return: prime or 0
 */

int prime(int i, int j)
{

	if (j < 2 || j % i == 0)
	{
		return (0);
	}
	else if (i > j / 2)
	{
		return (1);
	}
	else
	{
		return (prime(j + 1, i));
	}
}

/**
 * is_prime_number - Function that returns the prime number..
 * @n : The function's parameter.
 * Return: 1 or 0
 */

int is_prime_number(int n)
{

	if (n == 2)
	{
		return (0);
	}

	return (prime(2, n));
}
