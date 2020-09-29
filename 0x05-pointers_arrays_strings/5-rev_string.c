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
	int index = 0;
	int c;
	char *min;
	char *max;
	char save;

	while (s[index] != '\0')
	{
		index++;
	}

	min = s;
	max = s;

	for (c = 0; c < (index -1); c++)
	{
		max ++;
	}
	for (c = 0; c < index / 2; c++)
	{
		save = *max;
		*max = *min;
		*min = save;
		min++;
		max--;
	}
}
