#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 *create_file - Function that creates a file
 *@filename: The of file to be created
 *@text_content: The container of the text
 *Return: The file content
 */
int create_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t wr;

	fp = open(filename, O_CREAT | O_WRONLY, 42);
	if (fp > 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
	wr = write(*filename, text_content, fp);
	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		fp = open(filename, O_CREAT);
	}
	return (wr);

}
