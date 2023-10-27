#include <stdio.h>

/**
 * main - Function that prints all arguments received.
 * @argc: Function's parameter.
 * @argv: Function's parameter.
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;

	a = 0;
	while (a < argc)
	{
		printf("%s\n", argv[a]);
		a++;
	}
	return (0);
}
