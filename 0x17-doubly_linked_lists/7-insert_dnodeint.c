#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node in the given index
 * @h: pointer to first element
 * @idx: index given
 * @n: int to add in new node
 * Return: pointer to new node, or NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *previous;
	dlistint_t *new;
	unsigned int i;

	if (*h == NULL)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	current = *h;
	if (current->prev != NULL)
	{
		while (current->prev != NULL)
			current = current->prev;
	}
	for (i = 0; i < idx; i++)
	{
		if (current->next == NULL)
			return (NULL);
		current = current->next;
		i++;
	}
	previous = current->prev;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	current->prev = new;
	new->next = current;
	new->prev = previous;
	previous->next = new;
	return (new);
}
