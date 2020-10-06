#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - check the code for Holberton School students.
 * @a: something
 * @size: something
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int i;
	int index = 0;
	int res1 = 0;
	int res2;
	int sig;
	int sig2;

	for (i = 0; i < (size - 1); i++)
	{
		sig = index + (size + 1);
		res1 = res1 + a[sig];
		index = sig;
	}

	index = (size - 1);
	res2 = a[index];

	for (i = size - 1; i > 0; i--)
	{
		sig2 = (index + size) - 1;
		res2 = res2 + a[sig2];
		index = sig2;
	}

	printf("%d, %d\n", res1, res2);
}
