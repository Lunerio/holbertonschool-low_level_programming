#include "holberton.h"
#include <stdio.h>

/**
 * _strcpy - check the code for Holberton School students.
 * @dest: pointer to dest
 * @src: pointer to src
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{

	int index = 0;
	int cuenta;

	while (src[index] != '\0')
	{
		index++;
	}

	for (cuenta = 0; cuenta <= index; cuenta++)
	{
		dest[cuenta] = src[cuenta];
	}
	return (dest);
}
