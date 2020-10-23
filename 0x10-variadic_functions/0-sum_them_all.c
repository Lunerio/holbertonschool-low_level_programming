#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum every argument given
 * @n: int given
 * Return: 0 if n = 0, or sum if given arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;
	va_list sumlist;

	if (n == 0)
	{
		return (0);
	}

	va_start(sumlist, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(sumlist, unsigned int);
	}

	va_end(sumlist);

	return (sum);
}
