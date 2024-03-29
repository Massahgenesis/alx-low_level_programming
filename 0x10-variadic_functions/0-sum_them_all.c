#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function that returns the sum of all its parameters.
 * @n: Function's parameter.
 *
 * Return: res
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	unsigned int sum;

	va_start(args, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
	sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);

}
