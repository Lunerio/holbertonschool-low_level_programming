#include <unistd.h>

/**
 * main - executing commands
 * @c: variable for char
 * Return: returns 1
 */

int _potchar(char c);
void pront(char *c);

int main(void)
{
	char c[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	pront(c);
	_potchar('\n');

	return (1);
}

/**
 * _potchar - print char
 * Return: returns value
 * @c: char
 */

int _potchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * pront - loop for each char
 * @c: char
 * Return: void
 */

void pront(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		_potchar(c[i]);
	}
}
