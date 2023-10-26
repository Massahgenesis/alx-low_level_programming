#include "main.h"

/**
 * factorial - Function that writes the factorial of a given number.
 * @n: Function's parameter.
 * Return: The value or -1
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
