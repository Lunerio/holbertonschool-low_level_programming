#include "lists.h"

/**
 * listint_len - count the number of nodes
 * @h: pointer to the header
 * Return: Number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	unsigned int c = 1;

	if (h == NULL)
	{
		return (0);
	}
	if (h)
	{
		listint_len(h->next);
	}
	c++;
	return (c);
}
