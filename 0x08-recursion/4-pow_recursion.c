#include "main.h"
#include <math.h>

/**
 * _pow_recursion - Function that returns the value of x.
 * @x: The function's first parameter.
 * @y: The function's second parameter.
 * Return: The value or -1
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}
	else if (y > 0)
	{
	return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
