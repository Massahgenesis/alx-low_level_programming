#include "main.h"

/**
 * _memcpy - Function that copies memory area.
 * @dest: Function's parameter.
 * @src: Function's parameter.
 * @n: Function's parameter.
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
