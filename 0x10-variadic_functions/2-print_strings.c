#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Function that prints string.
 * @separator: A string to be printed.
 * @n: The number of string.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list c;
	unsigned int i;
	char *str;

	va_start(c, n);
	str = 0;
	for (i = 0; i < n; i++)
	{
	str = va_arg(c, char *);
		if (str != NULL)
		{
		printf("%s", str);
		}
		else
		{
		printf("(nil)");
		}
	if (i < n - 1 && separator != NULL)
	{
	printf("%s", separator);
	}
	}
	printf("\n");
	va_end(c);
}
