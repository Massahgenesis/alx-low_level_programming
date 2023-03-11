#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplication of two numbers, followed by a new line.
 * @argc: An argument
 * @argv: An argument
 * Return:0 or -1
 */

int main(int argc, char *argv[])
{
int i, n1, n2;
if (argc != 3)
{
printf("Error\n");
return (1);
}
n1 = atoi(argv[1]);
n2 = atoi(argv[2]);
i = n1  *n2;
printf("%d\n", i);
return (0);
}
