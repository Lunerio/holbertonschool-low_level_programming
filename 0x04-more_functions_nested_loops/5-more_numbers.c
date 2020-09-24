#include "holberton.h"

/**
 * more_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int i;
	int j;

	int n1;
	int n2;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			n1 = j / 10;
			n2 = j % 10;

			if (j > 9)
			{
				_putchar(n1 + '0');
			}
			_putchar(n2 + '0');
		}
		_putchar('\n');
	}
}
