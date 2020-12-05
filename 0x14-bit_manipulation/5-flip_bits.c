#include "holberton.h"

/**
 * flip_bits - count how many bits need to change
 * @n: first number
 * @m: second number
 * Return: Numbers of bits changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int comp;

	comp = n ^ m;
	while (comp != 0)
	{
		if ((comp & 1) == 1)
		{
			count++;
		}
		comp = comp >> 1;
	}
	return (count);
}
