#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include "main.h"

/**
 *read_textfile - Function that reads a text file and prints it to the POSIX
 *@filename: The name of a fine
 *@letters:The numbers of the letter to be printed
 *Return:0 or number
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t s_write, s_read;
	int fb;
	char *str;

	if (filename == NULL)
	{
		return (0);
	}
	str = malloc(sizeof(char) * letters);
	if (str == NULL)
	{
		return (0);
	}
	fb = open(filename, O_RDONLY);
	if (fb < 0)
	{
		close(fb);
		return (0);
	}
	s_read = read(fb, str, letters);
	close(fb);
	if (s_read < 0)
	{
		free(str);
		return (0);
	}
	s_write = write(STDOUT_FILENO, str, s_read);
	free(str);
	if (s_write != s_read)
	{
		return (0);
	}
	return (s_write);
}
