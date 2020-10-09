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
	int index;

	for (index = 0; index < n && src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	for (; index < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}
