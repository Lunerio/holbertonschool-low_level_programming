#include "holberton.h"

/**
 * binary_to_uint - transform binary to decimal
 * @b: char received
 * Return: The unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int len;
	int i;
	unsigned long int array[1024];
	unsigned long int sum = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (len = 0; b[len] != '\0'; len++)
	{
		if (b[len] != '1' && b[len] != '0')
		{
			return (0);
		}
	}

	array[0] = 1;

	for (i = 0; i <= len; i++)
	{
		array[i + 1] = ((array[i]) * 2);
	}

	i = 0;

	while (len > 0)
	{
		if (b[len] == '1')
		{
			sum += array[i];
		}
		i++;
		len--;
	}

	return (sum / 2);
}
