#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list hint;

	if (separator != NULL)
	{
		va_start(hint, n);
		for (i = 0; i < n; i++)
		{
			printf("%u", va_arg(hint, unsigned int));
			if (i < (n - 1))
			{
				printf("%s", separator);
			}
		}
	}
	va_end(hint);

	printf("\n");
}
