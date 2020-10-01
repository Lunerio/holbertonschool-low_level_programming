#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - check the code for Holberton School students.
 * @s1: pointer to s1
 * @s2: pointer to s2
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int index;
	int ch1;
	int ch2;

	for (index = 0; (s1[index] != '\0') && (s2[index] != '\0'); index++)
	{
		ch1 = s1[index];
		ch2 = s2[index];

		if (ch1 != ch2)
		{
			break;
		}
	}
	return (ch1 - ch2);
}
