#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * string_nconcat - Function that concatenates two strings.
 * @s1: Function's parameter..
 * @s2: Function's parameter.
 * @n: Function's parameter.
 * Return:str
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str = NULL;
	unsigned int i, j, lens1, lens2, len;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	lens1 = strlen(s1);
	lens2 = strlen(s2);
	if (n >= lens2)
	{
	n = lens2;
	}
	len = lens1 + n + 1;
	str = malloc(sizeof(char) * len);
	if (str == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < lens1; i++)
	{
	str[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
	str[i] = s2[j];
	i++;
	}
	str[lens1 + n] = '\0';
	return (str);
}

