#include "holberton.h"

/**
 * print_most_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (i == 2 || i == 4)
		{
			i++;
		}
		else
		{
			_putchar(i + '0');
			i++;
		}
	}
	_putchar('\n');
}
