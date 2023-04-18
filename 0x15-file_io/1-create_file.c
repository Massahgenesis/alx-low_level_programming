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
	int len;

	for (len = 0; text_content[len] != '\0'; len++)
	{
	;
	}
	if (filename == NULL)
	{
		return (-1);
	}
	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fp < 0)
	{
		return (-1);
	}
	write(fp, text_content, len);
	if (text_content == NULL)
	{
		fp = open(filename, O_CREAT, S_IRUSR | S_IWUSR);
	}
	return (1);

}
