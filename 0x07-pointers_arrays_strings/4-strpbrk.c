#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "hello, world";
	char *f = "world";
	char *t;

	t = _strpbrk(s, f);
	printf("%s\n", t);
	return (0);
}

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] >= 0; i++)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (s == accept)
			{
				i = 1;
				break;
			}
		}
	}
	return (s);
}
