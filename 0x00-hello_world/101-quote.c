#include <unistd.h>

/**
 * main - executing commands
 * _potchar - print each char
 * pront - loop for each char
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

int _potchar(char c)
{
	return (write(1, &c, 1));
}

void pront(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		_potchar(c[i]);
	}
}
