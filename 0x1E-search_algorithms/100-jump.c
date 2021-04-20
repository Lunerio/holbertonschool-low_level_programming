#include "search_algos.h"

/**
 * jump_search - Jump algorith for searching a value in array
 * @array: array to check
 * @size: Size of array
 * @value: Value to search for
 * Return: -1 if not found, index if found
 */


int jump_search(int *array, size_t size, int value)
{
	int step; /* This value changes with sqrt() */

	if (array == NULL)
		return (-1);

	for (step = 0; array[step] <= value; )
	{
		printf("Value checked array[%d] = [%d]\n", step, array[step]);
		if (array[step] == value)
			return (step);
		step += sqrt(size);
	}

	step = step - sqrt(size) + 1;

	while (array[step] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", step, array[step]);
		if (array[step] == value)
			return (step);
		step += 1;
	}

	return (-1);
}
