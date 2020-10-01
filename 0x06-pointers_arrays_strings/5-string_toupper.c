#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[] = "Holberton School!\n";
	char *p;

	p = string_toupper(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}

char *string_toupper(char *c)
{
	int n;

	for (n = 0; c[n] != '\0'; n++)
	{
		if (c[n] >= 97 && c[n] <= 122)
		{
			c[n] = c[n] - 32;
		}
	}
	return (c);
}
