#include "holberton.h"
#include <stdio.h>

/**
 * _strncat - check the code for Holberton School students.
 * @dest: pointer to dest
 * @src: pointer to src
 * @n: max number
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int index;
	int count;

	for (index = 0; dest[index] != '\0'; index++)
	{
	}

	for (count = 0; count < index; count++)
	{
		dest[index] = src[count];
		index++;
		if (count == n)
		{
			break;
		}
	}
	return (dest);
}