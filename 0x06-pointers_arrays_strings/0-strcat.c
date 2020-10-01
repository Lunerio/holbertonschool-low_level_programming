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
	p = _strcat(s1, s2);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", p);
	return (0);
}

char *_strcat(char *dest, char *src)
{
	int index;
	int charac;

	for (index = 0; dest[index] != '\0'; index++)
	{
	}
	for (charac = 0; src[charac] != '\0'; charac++)
	{
		dest[index] = src[charac];
		index++;
	}
	return (dest);
}
