#include "holberton.h"
#include <stdio.h>

/**
 * _strpbrk - check the code for Holberton School students.
 * @s: pointer to s
 * @accept: pointer to accept
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; s++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
		}
		if (s[i] == accept[j])
		{
			break;
		}
	}
	if (s[i] == accept[j])
	{
		return (s);
	}
	else
	{
		return (0);
	}

}
