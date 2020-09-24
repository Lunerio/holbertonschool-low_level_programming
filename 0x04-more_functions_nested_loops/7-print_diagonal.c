#include "holberton.h"

/**
 * print_diagonal - check the code for Holberton School students.
 * @n: to be declared
 * Return: Always 0.
 */
int main(void)
{
	print_diagonal(0);
	print_diagonal(2);
	print_diagonal(10);
	print_diagonal(-4);
	return (0);
}

void print_diagonal(int n)
{

	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 0; j < i; j++)
			{
				if (i == j)
				{
				_putchar('\\');
				_putchar('\n');
				}
				else
				{
				_putchar(' ');
				}
			}
		}
	}
}
