#include "main.h"


/**
 * get_bit - Function that returns the value of a bit at a given index.
 * @n: The storage of bit gets.
 * @index: The index starting from 0.
 *
 * Return: index or -1.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	if ((n >> index) & 1)
	{
		return (1);
	}
	return (0);
}
