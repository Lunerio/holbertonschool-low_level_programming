#include "holberton.h"
#include <stdio.h>

/**
 * _strlen_recursion - check the code for Holberton School students.
 * @s: pointer to string
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
	int index = 0;

	if (*s == '\0')
	{
		return (index);
	}
	index+= _strlen_recursion(s + 1) + 1;
	return (index);
}
