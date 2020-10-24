#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print given string in arguments
 * @separator: char for separator between strings
 * @n: number of arguments given
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list hchar;
	va_list cp;
	char test;

	if (n != 0)
	{
		va_start(hchar, n);
		if (separator != NULL)
		{
			for (i = 0; i < n; i++)
			{
				va_copy(cp, hchar);
				test = va_arg(cp, int);
				if (test == 0)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", va_arg(hchar, char *));
					if (i < (n - 1))
					{
						printf("%s", separator);
					}
				}
			}
		}
	}
	va_end(hchar);

	printf("\n");
}
