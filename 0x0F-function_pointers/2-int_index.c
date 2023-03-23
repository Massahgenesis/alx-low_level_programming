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
int a;
if (size > 0 && cmp && size && array)
{
for (a = 0; a <= size; a++)
{
if (cmp(array[a]))
{
return (a);
}
}
}
return (-1);
}
