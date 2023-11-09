#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - Function that executes a function as a parameter.
 * @array: A pointer as an argument.
 * @size: The size of the array..
 * @action: A pointer to the function.
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}
	}

}
