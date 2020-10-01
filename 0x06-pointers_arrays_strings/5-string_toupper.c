#include "holberton.h"
#include <stdio.h>

/**
 * string_toupper - check the code for Holberton School students.
 * @c: pointer
 * Return: Always 0.
 */

char *string_toupper(char *c)
{
	int n;

	for (n = 0; c[n] != '\0'; n++)
	{
		if (c[n] >= 97 && c[n] <= 122)
		{
			c[n] = c[n] - 32;
		}
	}
	return (c);
}
