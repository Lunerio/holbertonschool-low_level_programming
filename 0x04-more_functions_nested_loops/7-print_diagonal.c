#include "holberton.h"

/**
 * print_diagonal - check the code for Holberton School students.
 * @n: to be declared
 * Return: Always 0.
 */

void print_diagonal(int n)
{

	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (i > 0)
			{
				_putchar(' ');
			}
		}

		_putchar('\\');
		_putchar('\n');
	}
}
