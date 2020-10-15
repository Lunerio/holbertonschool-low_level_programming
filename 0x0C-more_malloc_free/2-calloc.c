#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory of array
 * @nmemb: elements of array
 * @size: sizeof
 * Return: pointer of malloc
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *h;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	h = malloc(nmemb * size);
	if (h == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		h[i] = 0;
	}
	return (h);
}
