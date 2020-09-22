#include "holberton.h"

/**
 * print_last_digit - check the code for Holberton School students.
 * @n: to be declared
 * Return: Always 0.
 */

int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
        print_last_digit(r);
	return (0);
}


int print_last_digit(int n)
{
	return (n % 10);
}
