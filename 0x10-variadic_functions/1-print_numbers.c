#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print the numbers given
 * @separator: separator string
 * @n: number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list hint;

	if (n != 0)
	{
		va_start(hint, n);
		if (separator != NULL)
		{
			for (i = 0; i < n; i++)
			{
				printf("%d", va_arg(hint, int));
				if (i < (n - 1))
				{
					printf("%s", separator);
				}
			}
		}
		else
		{
			for (i = 0; i < n; i++)
			{
				printf("%u", va_arg(hint, int));
			}
		}
	}

	va_end(hint);

	printf("\n");
}
