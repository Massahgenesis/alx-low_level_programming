#include "main.h"

/**
 * _sqrt_recursion - Function that writes a natural square root of a number.
 * @n: Function's parameter.
 * Return: sqrt or -1
 */

int _sqrt_recursion(int n)
{
	int sqrt;

	sqrt = 0;
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		sqrt = n * _pow_recursion(n);
	}
	return (sqrt);

}
