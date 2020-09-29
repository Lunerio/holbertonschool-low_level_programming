#include "holberton.h"

/**
 * puts2 - check the code for Holberton School students.
 * @str: pointer to str
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] != '\0')
		{
		_putchar(str[i - 1]);
		i = i + 2;
		}
		else
		{
			_putchar('\n');
		}
	}

}
