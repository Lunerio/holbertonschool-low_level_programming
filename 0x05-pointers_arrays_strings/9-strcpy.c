#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[98];
	char *p;

	p = _strcpy(s1, "First, solve the problem. Then, write the code\n");
	printf("%s", s1);
	printf("%s", p);
	return (0);
}

char *_strcpy(char *dest, char *src)
{

	int index = 0;
	int cuenta;

	while (src[index] != '\0')
	{
		index++;
	}

	for (cuenta = 0; cuenta <= index; cuenta++)
	{
		*dest = *src;
		;
	}
	return (dest);
}
