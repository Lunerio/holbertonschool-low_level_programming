#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - check the code for Holberton School students.
 * @n: to be declared
 * Return: Always 0.
 */

void print_to_98(int n)
{
	int j = n;
	int inic = 98;

	if (j <= inic)
	{
		for (; j < inic; j++)
			printf("%d, ", j);
	}

	if (j >= inic)
	{
		for (; j > inic; j--)
			printf("%d, ", j);
	}

	if (j == inic)
	{
		printf("%d", j);
	}
	printf("\n");
}
