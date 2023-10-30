#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Function that concatenates two strings.
 * @s1: Function's parameter.
 * @s2: Function's parameter
 * Return: The string concatenate.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, c, len;
	char *s3;

	c = 0, len = 0;
	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
	len++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	len++;
	}
	s3 = malloc(sizeof(char) * (len + 1));
	if (s3 == NULL)
	return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
	s3[c] = s1[i];
	c++;
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	s3[c] = s2[i];
	c++;
	}
	return (s3);
}
