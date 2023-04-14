#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 *binary_to_uint - Function that converts a binary number
 *@b: A pointer to string
 *Return: 0 or value
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len;
        int i;

	unsigned int number = 1;
	unsigned int value = 0;
	len = strlen(b);

	for (i = len - 1; i >= 0; i--)
	{
        	if (b[i] != '0' && b[i] != '1')
        	{
                	return (0);
        	}
		if (b[i] == '1')
		{
			value = value + number;
		}
		number = number * 2;
	}
	return (value);
}
