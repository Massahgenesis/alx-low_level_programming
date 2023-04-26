#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#define FIXED_SIZE 1024

/**
 *main - Function that copies the content of a file to another file
 *@argc: The content of array lenght
 *@argv: The array
 *Return:0
 */
int main(int argc, char *argv[])
{
	int fp_from, fp_to, close_fp_from, close_fp_to;
	ssize_t rd, wr;
	char file_content[FIXED_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fp_from = open(argv[1], O_RDONLY);
	rd = read(fp_from, file_content, FIXED_SIZE);
	if (rd < 0)
	{
		dprintf(STDERR_FILENO, "Error, can't read from %s\n", argv[1]);
		exit(98);
	}
	fp_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	wr = write(fp_to, file_content, rd);
	if (wr < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't write from %s\n", argv[2]);
		exit(99);
	}
	close_fp_from = close(fp_from);
	if (close_fp_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp_from);
		exit(100);
	}
	close_fp_to = close(fp_to);
	if (close_fp_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp_to);
		exit(100);
	}
	return (0);
}
