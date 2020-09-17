#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1 = 48;
	int n2 = 48;

	while (n1 <= 57)
	{
		putchar(n1);
		putchar(n2);
		n2++;

		if (n2 == 58)
		{
			n1++;
			n2 = 48;
		}
		if (n1 <= 57 && n2 <= 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
