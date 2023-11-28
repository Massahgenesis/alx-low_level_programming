#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#define FIXED_SIZE 1024

/**
 *main - Function that copies the content of a file to another file.
 *@argc: The number of arguments supplied to the program.
 *@argv: An array of pointer to the argument.
 *Return:0 on succes
 */

int main(int argc, char *argv[])
{
	int from, to, close_from, close_to;
	ssize_t r, w;
	char file_content[FIXED_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	r = read(from, file_content, FIXED_SIZE);
	to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error, can't read from %s\n", argv[1]);
		exit(98);
	}
	w = write(to, file_content, r);
	if (w == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write from %s\n", argv[2]);
		exit(99);
	}
	close_from = close(from);
	if (close_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	close_to = close(to);
	if (close_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
		exit(100);
	}
	return (0);
}
