#include "function_pointers.h"

/**
 *array_iterator - Function that executes function
 *@array: The array gives an a parameter
 *@size: The size of the array
 *@action: Apointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t a;
if (array && action)
{
for (a = 0; a < size; a++)
{
action(array[a]);
}
}
}
