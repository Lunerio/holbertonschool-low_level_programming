#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concat args to a char pointer.
 * @ac: args counter
 * @av: double pointer for arguments
 * Return: NULL on error, s as pointer with chars.
 */

char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int h = 0;
	int total = 0;
	int suma = 0;
	char *s;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			suma++;
		}
	}
	total = suma + ac + 1;

	s = malloc(sizeof(char) * total);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[h] = av[i][j];
			h++;
		}
		s[h] = '\n';
		h++;
	}
	return (s);
}
