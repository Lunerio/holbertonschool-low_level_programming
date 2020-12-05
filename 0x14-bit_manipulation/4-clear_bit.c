#include "holberton.h"

/**
 * clear_bit - change to 0 a bit at a given index
 * @n: number to analyze
 * @index: index to change in n
 * Return: 1 if successful, -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 0;

	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = mask | (1<<index);
	*n = *n & (~mask);

	return (1);
}
