#include <stdio.h>

/**
 * main - print 50 numbers in fibonacci
 * Return: 0
 */

int main(void)
{
	int i;
	long int num1 = 1;
	long int num2 = 2;
	long int sig;

	printf("%ld, ", num1);
	printf("%ld, ", num2);

	for (i = 0; i < 48; i++)
	{
		sig = num1 + num2;
		printf("%ld", sig);
		if (i < 47)
		{
			printf(", ");
		}
		num1 = num2;
		num2 = sig;
	}
	printf("\n");

	return (0);
}
