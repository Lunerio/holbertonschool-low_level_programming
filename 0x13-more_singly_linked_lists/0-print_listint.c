#include "lists.h"

/**
 * print_listint - print the list of nodes
 * @h: pointer to the head/first node
 * Return: Numbers of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int c = 0;

	if (h == NULL)
	{
		return (0);
	}
	else
	{
		printf("%d\n", h->n);
		c++;
	}

	c += print_listint(h->next);
	return (c);
}
