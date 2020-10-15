#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked
 * @b: limit
 * Return: x
 */

void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);

	if (x == NULL)
	{
		exit(98);
	}
	return (x);
}
