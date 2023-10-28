#include "main.h"
#include <stddef.h>
/**
 *_strstr - Function that locates a substring
 *@haystack: An integer
 *@needle: An integer
 *Return:haystack or Null
 */

char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h)
	{
	n = needle;
	h = haystack;
	while (*n)
	{
		if (*h == *n)
		{
		n++;
		h++;
		}
		else
		break;
	}
	if (*n == '\0')
		return (haystack);
		haystack++;
	}
	return (0);
}
