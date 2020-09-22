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
	int num_t;
	int num_m;
	int res;

	for (num_t = '0'; num_t <= '9'; num_t++)
	{
		for (num_m = '0'; num_m <= '9'; num_m++)
		{
			res = (num_t + '0') * (num_m + '0');
			_putchar(res + '0');
			_putchar(',');
			num_m++;
		}
	}
	_putchar('\n');
	num_t++;
}
