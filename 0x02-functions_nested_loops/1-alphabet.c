#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}

void print_alphabet(void)
{
	char l = 'a';
	while (l <= 'z')
      	{
		_putchar(l);
		l++;
	}
}
