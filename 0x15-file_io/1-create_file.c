#include "main.h"
#include <stdlib.h>

/**
 * create_file - Function creates a file.
 * @filename: Apointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: 1 when program succeed and -1 when failed.
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, len;

	o = open(filename, O_CREAT | O_WRONLY | O_TRUNC | S_IRUSR | S_IWUSR);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
		{
			;
		}
	}
	else
	{
		return (-1);
	}
	if (o == -1)
	{
		return (-1);
	}
	w = write(o, text_content, len);
	if (w == -1)
	{
		return (-1);
	}
	close(o);

	return (1);
}
