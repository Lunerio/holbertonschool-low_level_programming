#include "search_algos.h"

/**
 * linear_search - Use the search algorith to get the index of a value
 * @array: array of ints
 * @value: value to search for
 * @size: size of array
 * Return: -1 if not found, or index of value
 */

int linear_search(int *array, size_t size, int value)
{
    size_t index;

    if (array == NULL)
        return (-1);

    for (index = 0; index < size; index++)
    {
        printf("Value checked array[%lu] = [%d]\n", index, array[index]);
        if (array[index] == value)
            return (index);
    }

    return (-1);
}
