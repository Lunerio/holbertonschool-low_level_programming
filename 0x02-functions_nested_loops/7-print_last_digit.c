#include "holberton.h"

/**
 * print_last_digit - check the code for Holberton School students.
 * @n: to be declared
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	int ln;
	ln = n % 10;

	if (n < 0)
	{
		ln = ln * (-1);
	}

	_putchar(ln + '0');
	return (ln);
}
