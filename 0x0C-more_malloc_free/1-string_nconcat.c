#include "holberton.h"
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i1;
	unsigned int i2;
	char *h;

	for (i1 = 0; s1[i1] != 0; i1++)
	{
	}
	for (i2 = 0; s2[i2] != 0 && i2 < n; i2++)
	{
		i1++;
	}

	h = malloc(i1 * sizeof(char) + 1);
	if (h == NULL)
	{
		return (NULL);
	}

	for (i1 = 0; s1[i1] != 0; i1++)
	{
		h[i1] = s1[i1];
	}
	for (i2 = 0; s2[i2] != 0 && i2 < n; i2++)
	{
		h[i1] = s2[i2];
		i1++;
	}

	h[i1] = '\0';
	return (h);
}
