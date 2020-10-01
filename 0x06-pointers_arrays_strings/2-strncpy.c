#include "holberton.h"
#include <stdio.h>

/**
 * _strncpy - check the code for Holberton School students.
 * @dest: pointer to dest
 * @src: pointer to src
 * @n: max number
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;
	int count;

	while (src[index] != '\0')
	{
		index++;
	}

	for (count = 0; count <= index; count++)
	{
		dest[count] = src[count];
		if (count == n - 1)
		{
			break;
		}
	}
	return (dest);
}
