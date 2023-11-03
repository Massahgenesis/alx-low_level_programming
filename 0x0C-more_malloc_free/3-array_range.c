#include "main.h"
#include <stdlib.h>

/**
 * array_range - Function that creates an array of integers.
 * @min: Function's parameter.
 * @max: Function's parameter.
 * Return:a.
 */

int *array_range(int min, int max)
{

	int *a;
	int i;
	int len;

	if (min > max)
	{
	return (NULL);
	}
	len = max - min + 1;
	a = malloc(sizeof(int) * len);
	if (a == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < len; i++, min++)
	{
	a[i] = min;
	}
	return (a);
}

