#include <stdio.h>
/**
 * main - tests function that prints if integer is positive or negative
 * @argc: argument counter
 * @argv: argument array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
