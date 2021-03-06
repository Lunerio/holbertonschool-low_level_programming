#include "holberton.h"

/**
 * close_func - function for closing the files
 * @a: variable
 */
void close_func(int a)
{
	int close_a;

	close_a = close(a);
	if (close_a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", a);
		exit(100);
	}
}

/**
 * main - function for openin files, reading file1 and writing file2
 * @argc: number of arguments
 * @argv: strings for file1 and file2
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int fd1, fd2, fdwrite, fdread = 1;
	char *buf = malloc(sizeof(char) * 1024);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	while (fdread > 0)
	{
		fdread = read(fd1, buf, 1024);
		if (fdread == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buf), exit(98);
		}
		if (fdread > 0)
		{
			fdwrite = write(fd2, buf, fdread);
			if (fdwrite == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
				free(buf), exit(99);
			}
		}
	}
	close_func(fd2);
	close_func(fd1);
	free(buf);
	return (0);
}
