#include "search_algos.h"

/**
 * binary_search - Use binary search algorith to get the index of a value
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 */

int binary_search(int *array, size_t size, int value)
{
    int lo = 0;
    int hi = size - 1;
    int mid;
    int i;

    while (lo <= hi)
    {
        printf("Searching in array: ");
        for (i = lo; i < hi; i++)
            printf("%d, ", array[i]);
        printf("%d\n", array[i]);

        mid = lo + (hi - lo) / 2;
        if (array[mid] == value)
            return mid;

        if (value > array[mid])
            lo = mid + 1;
        else
            hi = mid - 1;
    }

    return (-1);
}
