#include "holberton.h"

/**
 * rec_int - recursivelly increment multiplier
 * @n: number to analize
 * @i: square root
 * Return: -1 if not natural square found, i if natural root
 */

int rec_int(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	rec_int(n, i + 1);
}

/**
 * _sqrt_recursion - get's the return from the rec_int function
 * @n: number to get the square root
 * Return: from the rec_int function

int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);

	return(rec_int(n, 1));
}
