#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - return the concatenation
 * @s1: pointer to char
 * @s2: pointer to char
 * Return: pointer to nstr
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i1;
        unsigned int i2;
	char *nstr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i1 = 0; s1[i1] != 0; i1++)
	{
	}

	for (i2 = 0; s2[i2] != 0; i2++)
	{
		i1++;
	}

	nstr = malloc(i1 * sizeof(char) + 1);

	if (nstr == NULL)
	{
		return (NULL);
	}

	for (i1 = 0; s1[i1] != 0; i1++)
	{
		nstr[i1] = s1[i1];
	}
	for (i2 = 0; s2[i2] != 0; i2++)
	{
		nstr[i1] = s2[i2];
		i1++;
	}
	return (nstr);
}
