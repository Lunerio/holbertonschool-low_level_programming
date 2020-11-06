#include "holberton.h"

/**
 * get_bit - return the bit in the given index of the given int
 * @index: index to check
 * @n: number give
 * Return: 0 if index bit is 0, 1 if index bit is 1. -1 in case of error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	n = n >> index;

	if (n & 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
