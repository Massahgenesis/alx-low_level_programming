#include "main.h"

/**
 * is_palindrome - Writes a function that determine palindrome.
 * @s : The parameter of the function
 *
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	int i, j;

	i = 0;
	j = 0;
	if (i <= j)
	{
		return (1);
	}
	else if (s[i] == s[j])
	{
		is_palindrome(s, i++, --j);
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);

}
