#include "holberton.h"
#include <stdlib.h>

/**
 *create_array - function that prints array
 * @size: argument
 * @c: argument
 * Return: the malloc pointer
 *
 */

char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	ch = malloc(size * sizeof(char));
	if (ch == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ch[i] = c;
	}
	return (ch);
}
