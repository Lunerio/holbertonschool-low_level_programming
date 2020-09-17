#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1 = 48;
	int n2 = 97;

	while (n1 <= 57)
	{
		putchar(n1);
		n1++;
	}

	while (n2 <= 102)
	{
		putchar(n2);
		n2++;
	}

	putchar('\n');

	return (0);
}
