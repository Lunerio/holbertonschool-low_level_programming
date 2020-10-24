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
	char *test;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(hchar, n);
	for (i = 0; i < (n - 1); i++)
	{
		test = va_arg(hchar, char *);
		if (test == NULL)
		{
			test = "(nil)";
		}
		if (separator != NULL)
		{
			printf("%s%s", test, separator);
		}
		else
		{
			printf("%s", test);
		}
	}
	test = va_arg(hchar, char *);
	if (test == NULL)
	{
		test = "(nil)";
	}
	printf("%s\n", test);
	va_end(hchar);
}
