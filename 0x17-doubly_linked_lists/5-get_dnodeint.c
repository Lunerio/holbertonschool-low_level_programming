#include "lists.h"

/**
 * get_dnodeint_at_index - access the node in a given index
 * @head: pointer to first element
 * @index: index to get
 * Return: pointer to the node in given index, NULL if not found
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *act = head;
	dlistint_t *check;
	unsigned int i;
	size_t j;

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
		check = act->next;
		if (check == NULL)
			return (NULL);
		act = act->next;
        }
	return (act);
}
