#include "holberton.h"

/**
 * binary_to_uint - transform binary to decimal
 * @b: char received
 * Return: The unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int n = 0;

	if (b == 0)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		else
		{
			n = n << 1;
			if (b[i] == '1')
			{
				n += 1;
			}
		}
	}

	return (n);
}
