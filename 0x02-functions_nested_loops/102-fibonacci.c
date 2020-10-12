#include <stdio.h>

int main(void)
{
	int i;
	unsigned int num1 = 1;
	unsigned int num2 = 2;
	unsigned int sig;

	printf("%u, ", num1);
	printf("%u, ", num2);

	for (i = 0; i < 48; i++)
	{
		sig = num1 + num2;
		printf("%u", sig);
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
