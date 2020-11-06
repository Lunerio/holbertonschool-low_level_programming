#include "holberton.h"

void print_binary(unsigned long int n)
{
	long int i = 0;
	long int mask = 0;
	long int flag = 0;

	if (n == 0)
		_putchar('0');

	for (i = 32; i >= 0; i--)
	{
		mask = n >> i;

		if (mask & 1)
		{
			flag = 1;
			_putchar('1');
		}
		else
			if (flag == 1)
			{
				_putchar('0');
			}
	}
}
