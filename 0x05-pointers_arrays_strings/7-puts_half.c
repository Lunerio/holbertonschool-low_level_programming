#include "holberton.h"

/**
 * puts_half - check the code for Holberton School students.
 * @str: point to str
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int index = 0;
	int mid;

	while (str[index] != '\0')
	{
		index++;
	}

	if (index % 2 != 0)
	{
		mid = (index + 1) / 2;
	}
	else
	{
		mid = index / 2;
	}
	while (str[mid] != '\0')
	{
		_putchar(str[mid]);
		mid++;
	}
	_putchar('\n');
}
