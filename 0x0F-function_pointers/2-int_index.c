#include "function_pointers.h"

/**
 * int_index -i Function that searches for an integer.
 * @array: The array
 * @size: The number of the elements
 * @cmp: Apointer to the function.
 * Return: Index of the first element.
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
