#include "lists.h"

/**
 * get_dnodeint_at_index - access the node in a given index
 * @head: pointer to first element
 * @index: index to get
 * Return: pointer to the node in given index, NULL is not found
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *act = head;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	if (act->prev != NULL)
	{
		while (act->prev != NULL)
		{
			act = act->prev;
		}
	}

	for (i = 0; i < index; i++)
	{
		if (act->next == NULL)
			return (NULL);
		act = act->next;
	}
	return (act);
}
