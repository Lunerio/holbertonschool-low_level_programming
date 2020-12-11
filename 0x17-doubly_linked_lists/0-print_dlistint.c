#include "lists.h"

/**
 * print_dlistint - print elements of a doubly linked list
 * @h: pointer to first element
 * Return: Number of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
