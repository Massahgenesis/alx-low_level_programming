#include <stdio.h>

/**
 * main - Function that prints the number of arguments sets.
 * @argc: Function's parameter.
 * @argv: Function's parameter.
 * Return: The number.
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
