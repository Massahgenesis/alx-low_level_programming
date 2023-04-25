#include "main.h"
#include <stdio.h>

/**
 *print_binary - Function that prints the binary representation of a number
 *@n: A parameter
 *
 */


void print_binary(unsigned long int n)
{

	int i;
	int q = 0;
	unsigned long int m = n

	while (m > 1)
	{
		m = m >> 1;
		q++;
	}
	for (i = q; i >= 0; i--)
	{
		if (n & (1 << i))
			_putchar('1');
		else
			_putchar('0');
	}
}
