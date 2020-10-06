#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int c3[3][3] = {
		{0, 1, 5},
		{10, 11, 12},
		{1000, 101, 102},
	};
	int c5[5][5] = {
		{0, 1, 5, 12124, 1234},
		{10, 11, 12, 123521, 12512},
		{1000, 101, 102, 12545, 214543435},
		{100, 1012451, 11102, 12545, 214543435},
		{10, 12401, 10452, 11542545, 1214543435},
	};
	print_diagsums((int *)c3, 3);
	print_diagsums((int *)c5, 5);
	return (0);
}

void print_diagsums(int *a, int size)
{
	int i;
	int index = 0;
	int res1 = 0;
	int res2;
	int sig;
	int sig2;
	int count = 1;

	for (i = 0; i < (size - 1); i++)
	{
		sig = index + (size + 1);
		res1 = res1 + a[sig];
		index = sig;
	}

	index = (size - 1);
	res2 = a[index];

	for (i = 0; i < size - 1; i++)
	{
		sig2 = (index + size) - count;
		count++;
		res2 = res2 + a[sig2];
		index = sig2;
	}

	printf("%d, %d\n", res1, res2);
}
