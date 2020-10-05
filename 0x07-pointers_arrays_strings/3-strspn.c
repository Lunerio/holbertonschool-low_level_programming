#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - check the code for Holberton School students.
 * @s: pointer to string
 * @accept: pointer to string
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int c = 0;

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (accept[j] == s[i])
			{
				c++;
				break;
			}
		}
		if (c == i)
		{
			break;
		}
	}
	return (c);
}
