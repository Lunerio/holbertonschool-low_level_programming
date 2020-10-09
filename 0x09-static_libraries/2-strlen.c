#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - check the code for Holberton School students.
 * @s: pointer to str
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		index++;
	}
	return (index);
}
