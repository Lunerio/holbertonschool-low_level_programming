#include "holberton.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	int p;
	char *buf = malloc(letters);
	int count;

	if (filename == NULL)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}

	count = read(file, buf, letters);
	if (count == -1)
	{
		return (0);
	}

	p = write(STDOUT_FILENO, buf, count);
	if (p == -1)
	{
		return (0);
	}

	close(file);
	free(buf);
	return (p);
}
