#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Function that reads a text file and prints it to the POSIX.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters that should be read and print.
 *
 * Return: 0 or the number of the fonction's read and prints.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t w, r;
	int o;
	char *str;

	if (filename == NULL)
	{
		return (0);
	}
	str = malloc(sizeof(char) * letters);
	if (str == NULL)
		return (0);
	o = open(filename, O_RDONLY);
	if (o == -1)
	{
		close(o);
		return (0);
	}
	r = read(o, str, letters);
	if (r == -1)
	{
		free(str);
		return (0);
	}
	w = write(STDOUT_FILENO, str, r);
	free(str);
	if (w != r)
	{
		return (0);
	}
	return (w);
}
