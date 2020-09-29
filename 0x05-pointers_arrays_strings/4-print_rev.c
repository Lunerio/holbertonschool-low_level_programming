#include "holberton.h"

/**
 * print_rev - check the code for Holberton School students.
 * @s: pointer to s
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		index++;
	}
	while (index >0)
	{
		_putchar(s[index]);
		index--;
	}
	_putchar('\n');
}
