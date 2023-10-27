#include <stdio.h>
#include <stdlib.h>

/**
 * main - Function that multiplies two numbers.
 * @argc: Function's parameter.
 * @argv: Function's parameter.
 * Return:The value or Error.
 */

int main(int argc, char *argv[])
{
	int i, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	i = num1 * num2;
	printf("%d\n", i);
	return (0);
}
