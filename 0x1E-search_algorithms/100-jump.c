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
	unsigned int step; /* This value changes with sqrt() */
	unsigned int next_step;

	if (array == NULL || size == 0)
		return (-1);

	for (step = 0; array[step] <= value; )
	{
		printf("Value checked array[%d] = [%d]\n", step, array[step]);
		if (array[step] == value)
			return (step);
		step += sqrt(size);
        if (step >= size)
            break;
	}

	next_step = step;
	step = step - sqrt(size) + 1;
	printf("Value found between indexes [%d] and [%d]\n", step, next_step);

	while (step < next_step && step < size)
	{
		printf("Value checked array[%d] = [%d]\n", step, array[step]);

		if (array[step] == value)
			return (step);
		step += 1;
	}

	return (-1);
}

