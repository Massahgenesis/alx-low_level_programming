#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number
 * Return: 0 or sum
 */

int sum_them_all(const unsigned int n, ...)
{
va_list a;
unsigned int i;
unsigned int sum = 0;
va_start(a, n);
for (i = 0; i < n; i++)
sum += va_arg(a, int);
va_end(a);
return (sum);
}
