#include "holberton.h"
#include <stdlib.h>

/**
 * array_range
 * @min: min number
 * @max: max number
 * Return: pointer to h
 */

int *array_range(int min, int max)
{
	int i;
	int size = max - min + 1;
	int *h;

	if (min > max)
	{
		return (NULL);
	}

	h = malloc(size * sizeof(int));
	if (h == NULL)
	{
		return (NULL);
	}

	for (i = 0; h[i] <= max; i++)
	{
		h[i] = min;
		min++;
	}
	return (h);
}
