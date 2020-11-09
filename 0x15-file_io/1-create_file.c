#include "holberton.h"

/**
 * create_file - Create new file. If already exist truncate it
 * @filename: name of file given
 * @text_content: content to add to the file
 * Return: 1 in case of success. -1 in case of error.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int p;
	int i;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != 0; i++)
		{
		}
		p = write(fd, text_content, i);
	}

	close(fd);

	if (p == -1)
	{
		return (-1);
	}

	return (1);
}
