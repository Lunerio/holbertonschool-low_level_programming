#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[] = "Hello";
	char s2[] = "World!";

	printf("%d\n", _strcmp(s1, s2));
	printf("%d\n", _strcmp(s2, s1));
	printf("%d\n", _strcmp(s1, s1));
	return (0);
}

int _strcmp(char *s1, char *s2)
{
	int index;

	for (index = 0; (s1[index] != '\0') && (s2[index] != '\0'); index++)
	{
		if (s1[index] > s2[index])
		{
			break;
			return (s1[index] - s2[index]);
		}
		else if (s2[index] > s1[index])
		{
			break;
			return (s2[index] - s1[index]);
		}
	}
	return (0);
}
