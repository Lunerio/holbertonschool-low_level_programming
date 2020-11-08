#include "holberton.h"

/**
 * print_triangle - Print a triangle with given size
 * @size: height of triangle
 */

void print_triangle(int size)
{
	int lin;
	int sym;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (lin = size; lin > 0; lin--)
		{
			for (sym = 0; sym < (lin - 1); sym++)
			{
				_putchar(' ');
			}
			while (sym < size)
			{
				_putchar('#');
				sym++;
			}
			_putchar('\n');
		}
	}
}
