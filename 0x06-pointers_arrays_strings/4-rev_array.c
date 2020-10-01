#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int temp;
	int max = n - 1;
	int min = 0;
	int c;

	for (c = 0; c < n / 2; c++)
	{
		temp = a[max];
		a[max] = a[min];
		a[min] = temp;
		max--;
		min++;
	}
}
