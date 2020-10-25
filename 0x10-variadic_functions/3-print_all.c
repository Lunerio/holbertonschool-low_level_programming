#include <stdlib.h>
#include <stdio.h>
#include <variadic_functions.h>

/**
 * print_all - print any kind of data
 * @format: chars that set the format
 */
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

/**
 * pechar - print char
 * @cye: separator
 * @magicians: list
 */
void pechar(char *cye, va_list magicians)
{
	printf("%s%c", cye, va_arg(magicians, int));
}
/**
 * pinta - something
 * @cye: separator
 * @magicians: list
 */
void pinta(char *cye, va_list magicians)
{
	printf("%s%i", cye, va_arg(magicians, int));
}
/**
 * fumeta - something
 * @cye: separator
 * @magicians: list
 */
void fumeta(char *cye, va_list magicians)
{
	printf("%s%f", cye, va_arg(magicians, double));
}
/**
 * sublingual - something
 * @cye: separator
 * @magicians: list
 */
void sublingual(char *cye, va_list magicians)
{
	char *string = va_arg(magicians, char *)

	if (string == NULL)
	{
		string = ("(nil)");
	}
	printf("%s%s", cye, va_arg(magicians, string));
}
