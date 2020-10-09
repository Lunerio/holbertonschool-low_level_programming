#include "holberton.h"
#include <stdio.h>

/**
 * _strcat - check the code for Holberton School students.
 * @dest: pointer to dest
 * @src: pointer to src
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int index;
	int charac;

	for (index = 0; dest[index] != '\0'; index++)
	{
	}
	for (charac = 0; src[charac] != '\0'; charac++)
	{
		dest[index] = src[charac];
		index++;
	}
	return (dest);
}
