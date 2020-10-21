#include <stdlib.h>

/**
 * int_index - returns the index of the value that matches
 * @array: array given to analyze
 * @size: size of array
 * @cmp: function that analyzes
 * Return: -1 if size <= 0, or if there are not matches. index if matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
