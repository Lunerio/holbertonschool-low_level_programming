#include "lists.h"

/**
 * free_listint - free memory allocation of each node
 * @head: pointer to the head node
 */

void free_listint(listint_t *head)
{
	if (!head)
	{
		return;
	}

	if (head->next)
	{
		free_listint(head->next);
	}

	free(head);
}
