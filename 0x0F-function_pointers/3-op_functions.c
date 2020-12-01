#include "3-calc.h"

/**
 * op_add - bla
 * @a: algo
 * @b: algo
 * Return: result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - bla
 * @a: algo
 * @b: algo
 * Return: result
 */


int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - bla
 * @a: algo
 * @b: algo
 * Return: result
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - bla
 * @a: algo
 * @b: algo
 * Return: result
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("No divide\n");
		exit(100);
	}
	return (a / b);
}


/**
 * op_mod - bla
 * @a: algo
 * @b: algo
 * Return: result
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("No modula\n");
		exit(100);
	}
	return (a % b);
}
