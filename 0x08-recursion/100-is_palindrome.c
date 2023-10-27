#include "main.h"

/**
 * palindrome - Function that determines the palindrome.
 * @a: Function's parameter.
 * @y: Function's parameter.
 * Return: The palindrome.
 */

int palindrome(int a, int y)
{
	if (a + 1 == y - 1)
	{
		return (1);
	}
	else if (a + 1 != y - 1)
	{
		return (0);
	}
	return (palindrome(a++, --y));
}

/**
 * is_palindrome - Writes a function that determine palindrome.
 * @s: The parameter of the function
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{

	if (*s == 2)
	{
		return (0);
	}
	return (palindrome(2, *s));
}

