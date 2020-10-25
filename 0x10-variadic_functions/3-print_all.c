#include <stdlib.h>
#include <stdio.h>
#include <variadic_functions.h>

void print_all(const char * const format, ...)
{
	char *cye = "";
	va_list magicians;
	int i;
	int j;

	va_start(magicians, format);

	while (format && format[i])
	{
		while (pld[j] != '\0')
		{
			if (format[i] == pld[j].bomba[0])
			{
				pld[j].funk(cye, magicians);
				cye = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(magicians);
	printf("\n");
}
