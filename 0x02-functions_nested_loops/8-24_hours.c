#include "holberton.h"

/**
 * jack_bauer - check the code for Holberton School students.
 * @a @b @c @d: to be declared
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int a, b, c, d = 0;

	while(a <= 2)
	{
		while (b <= 9)
		{
			while (c <= 5)
			{
				while(d <= 9)
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
