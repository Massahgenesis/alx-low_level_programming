#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Function that prints numbers.
 * @separator: The string to print.
 * @n: The number to print.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list b;
	unsigned int i;
	int num;

	va_start(b, n);
	for (i = 0; i < n; i++)
	{
	num = va_arg(b, int);
	printf("%d", num);
	if (i < n - 1 && separator != NULL)
	{
	printf("%s", separator);
	}
	}
	printf("\n");
	va_end(b);
}
