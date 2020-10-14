#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - duplicate string
 * @str: pointer to str
 *Return: return pointer to malloc
 */

char *_strdup(char *str)
{
	char *s;
	int i;
	int size = 0;

	for (i = 0; str[i] != 0; i++)
	{
		size++;
	}

	s = malloc(size * sizeof(char) + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		s[i] = str[i];
	}

	return (s);
}
