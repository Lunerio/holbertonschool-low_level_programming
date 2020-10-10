#include <stdio.h>
#include <stdlib.h>

/**
 * main - tests function that prints if integer is positive or negative
 * @argc: argument counter
 * @argv: arguemtn array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
