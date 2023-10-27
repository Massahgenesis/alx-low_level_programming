#include "main.h"

/**
 * square - Function that determines the square
 * @x: Function's parameter.
 * @y: Function's parameter.
 * Return: The square
 */

int square(int x, int y)
{
	if (x * x == y)
	{
		return (x);
	}
	else if (x * x > y)
	{
		return (-1);
	}
	return (square(x + 1, y));
}
/**
 * _sqrt_recursion - Function that return the square.
 * @n: Function's parameter.
 * Return: The value or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (square(1, n));
}
