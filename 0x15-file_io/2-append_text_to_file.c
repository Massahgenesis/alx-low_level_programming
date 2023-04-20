#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 *append_text_to_file - Function that appends text at the end of a file
 *@filename: The name of the file
 *@text_content: The text container
 * Return: The text appended
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	int len;

	fp = open(filename, O_WRONLY | O_APPEND);
	if (text_content != NULL)
	{
	for (len = 0; text_content[len] != '\0'; len++)
	{
	;
	}
	}
	else if (filename == NULL)
	{
		return (-1);
	}
	if (fp < 0)
	{
		return (-1);
	}
	write(fp, text_content, len);
	close(fp);
	return (1);
}
