#include <stdlib.h>

/**
 * array_iterator - iterates through the elements of the given array
 * @array: array of ints
 * @size: size of array
 * @action: pointer to function given
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
