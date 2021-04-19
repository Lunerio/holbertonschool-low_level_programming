#include "search_algos.h"

/**
 * binary_search - Use binary search algorith to get the index of a value
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 */

int binary_search(int *array, size_t size, int value)
{
    int mid = size / 2;

    if (array == NULL)
        return (-1);

    if (size == 1)
    {
        if (value == array[0])
            return (0);
        else
            return (-1);
    }

    if (value == array[mid])
        return (mid);

    if (value > array[mid])
    {
        if (mid % 2 != 0)
            return (binary_search(&array[mid], mid + 1, value));
        else
            return (binary_search(&array[mid], mid, value));
    }

    if (value < array[mid])
    {
        return (binary_search(array, mid, value));
    }

    return (-1);
}
