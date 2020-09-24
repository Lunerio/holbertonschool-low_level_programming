#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_triangle(2);
	print_triangle(10);
	print_triangle(1);
	print_triangle(0);
	return (0);
}

void print_triangle(int size)
{

	int lin;
	int esp;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (lin = 1; lin <= size; lin ++)
		{
			for(esp = lin - 1; esp < lin; esp++)
			{
				_putchar(' ');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
}
