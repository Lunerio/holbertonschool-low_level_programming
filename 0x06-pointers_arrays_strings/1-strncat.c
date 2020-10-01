#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *p;

	printf("%s\n", s1);
	printf("%s", s2);
	p = _strncat(s1, s2, 1);
	printf("%s\n", s1);
	printf("%s", s2);
	printf("%s\n", p);
	p = _strncat(s1, s2, 1024);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", p);
	return (0);
}

char *_strncat(char *dest, char *src, int n)
{
	int index;
	int count;

	for (index = 0; dest[index] != '\0'; index++)
	{
	}

	for (count = 0; src[count] != '\0'; count++)
	{
		dest[index] = src[count];
		index++;
		if (count == n - 1)
		{
			break;
		}
	}
	return (dest);
}
