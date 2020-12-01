#include "3-calc.h"

/**
 * main - duh
 * @ac: argument count
 * @av: list of arguments
 * Return: 0;
 */

int main(int ac, char **av)
{
	int a;
	int b;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(av[1]);
	b = atoi(av[3]);
	printf("%d\n", (*get_op_func(av[2]))(a, b));

	return (0);
}
