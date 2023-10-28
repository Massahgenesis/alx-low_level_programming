#include "main.h"

/**
 * _strspn - Function that gets the length of a prefix substring.
 * @s: Function's parameter.
 * @accept: Function's parameter.
 * Return:The lenght.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int lenght;

	lenght = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; accept[j] != '\0' && accept[j] != s[i];
	j++)
	{
	;
	}
	if (s[i] == accept[j])
	{
		lenght++;
	}
	if (accept[j] == '\0')
	{
		return (lenght);
	}

	}
	return (lenght);
}
