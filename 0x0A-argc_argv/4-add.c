#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - tests function that prints if integer is positive or negative
 * @argc: argument counter
 * @argv: arguemtn array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;
	char c;

	if (argc < 1)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			c = argv[i][j];
			if (isdigit(c) == 0)
			{
				printf("Error");
				printf("\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
