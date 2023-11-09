#include "function_pointers.h"

/**
 *int_index - Function that searches for an integer
 *@array: An array
 *@size: Size of array
 *@cmp: A pointer to the function
 *Return:0 or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && cmp && size && array)
	{
	for (i = 0; i <= size; i++)
	{
	if (cmp(array[i]))
	{
	return (i);
	}
	}
	}
	return (-1);
}

