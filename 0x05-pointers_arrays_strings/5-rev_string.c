#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[10] = "Holberton";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}

void rev_string(char *s)
{
	int min;
	int max;

	min = 0;
	max = 0;

	while (s[max] != '\0')
	{
		max++;
	}

	while ((min != '\0') && (max < 0))
	{
		min++;
		max--;
	}
	_putchar('\n');
}
