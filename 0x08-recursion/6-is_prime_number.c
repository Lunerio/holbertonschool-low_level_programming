#include "holberton.h"

/**
 * rec_prime - recursive function that process n and i
 * @n: int to analyze
 * @i: int that moves in order to do recursion
 * Return: 1 if n is prime, 0 otherwise
 */

int rec_prime(int n, int i)
{
	if (i == 1)
		return (1);

	if (n % i == 0)
		return (0);

	return (rec_prime(n, i - 1));
}

/**
 * is_prime_number - analyze n to find if its prime
 * @n: number to analyze
 * Return: from rec_prime
 */

int is_prime_number(int n)
{
	if (n == 1)
		return (0);

	if (n <= 0)
		return (0);

	return (rec_prime(n, n - 1));
}
