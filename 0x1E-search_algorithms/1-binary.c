#include "search_algos.h"

/**
 * binary_search - Use binary search algorith to get the index of a value
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 */

int binary_search(int *array, size_t size, int value)
{
    int lo = *array;
    int mid = size / 2;

    if (array == NULL)
        return (-1);

    if (value == array[mid])
        return (mid);

    if (value > array[mid])
        return (binary_search(&array[mid], mid, value));

    if (value < array[mid])
        return (binary_search(&array[lo], mid, value));

    return (-1);
}
