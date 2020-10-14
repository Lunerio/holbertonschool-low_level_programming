#include "holberton.h"
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	unsigned int i1;
	unsigned int i2;
	unsigned int i3;
	char *nstr;

	for (i1 = 0; s1[i1] != 0; i1++)
	{
	}
	for (i2 = 0; s2[i2] != 0; i2++)
	{
		i1++;
	}

	nstr = malloc (i1 * sizeof(char));
	if (nstr == NULL)
	{
		return (NULL);
	}
	if (i1 == 0)
	{
		return (NULL);
	}

	for (i3 = 0; s2[i2] != 0; i3++)
	{
		s1[i1] = s2[i2];
		nstr[i3] = s1[i1];
		i1++;
		i2++;
	}
	return (nstr);
}
