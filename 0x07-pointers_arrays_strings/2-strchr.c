#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - check the code for Holberton School students.
 * @s: pointer to string
 * @c: char
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= 0; s++)
	{
		if (s[i] == c)
		{
			i = 1;
			break;
		}
	}
	if (i != 0)
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
