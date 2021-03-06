#include "lists.h"

/**
 * dlistint_len - get number of elements in a doubly linked list
 * @h: pointer to first element
 * Return: Number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}
	if (h->prev != NULL)
	{
		while (h->prev != NULL)
		{
			h = h->prev;
		}
	}
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
