#include "holberton.h"

/**
 * print_alphabet - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}
