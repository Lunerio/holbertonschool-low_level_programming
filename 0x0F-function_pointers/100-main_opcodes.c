#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main -whatever
 * @argc: counter
 * @argv: arguments
 * Return: something
 */

int main(int argc, char *argv[])
{
	int i;
	int h = atoi(argv[1]);
	char c = argv[1];
	int pf = main;

	if (argc < 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (h < 0)
	{
		printf("Error\n");
		exit(2);
	}
	if (isdigit(c) == 0)
	{
		printf("Error\n");
		exit(1);
	}

	for (i = 0; i <= h; i++)
	{
		printf("%p", main);
		pf++;
		if (i < h)
		{
			printf(" ");
		}
		if (i == h)
		{
			printf("\n");
		}
	}
	return (0);
}
