#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	times_table();
	return (0);
}

void times_table(void)
{
	char num_t;
	char num_m;
	int res;

	for (num_t = 0; num_t <= 9; num_t++)
	{
		for (num_m = 0; num_m <= 9; num_m++)
		{
			res = num_t * num_m;
			if (res > 9)
			{
				_putchar((res / 10) + '0');
				_putchar((res %10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(res + '0');
		        }
			if (num_m < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}
