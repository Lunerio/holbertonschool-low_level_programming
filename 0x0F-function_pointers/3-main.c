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
	int ret;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(av[1]);
	b = atoi(av[3]);
	if (get_op_func(av[2])(a, b) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	ret = get_op_func(av[2])(a, b);
	printf("%d\n", ret);

	return (0);
}
