#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *str;

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	print_rev(str);
	return (0);
}

void print_rev(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
	}
	while (index >=0)
	{
		_putchar(s[index-1]);
		index--;
	}
	_putchar('\n');
}
