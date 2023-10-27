#include <stdio.h>

/**
 * main - Function that prints all caracters.
 * @argc: Function's parameter.
 * @argv: Function's parameter.
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
