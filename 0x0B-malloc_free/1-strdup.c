#include "holberton.h"
#include <stdlib.h>

char *_strdup(char *str)
{
	unsigned int size = 0;
	unsigned int i;
	char *s;

	for (i = 0; str[i] != 0; i++)
	{
		size++;
	}

	s = malloc(size * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	if (size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		s[i] = str[i];
	}

	return (s);
}
