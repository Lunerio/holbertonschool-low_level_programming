#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - pointer to function that takes name as value for the argument
 * @name: argument to receive
 * @f: pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	(*f)(name);
}
