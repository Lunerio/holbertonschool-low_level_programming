#include "lists.h"

/**
 * free_dlistint - free a doubly linked list
 * @head: pointer to first element
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *save = head;

	if (head == NULL)
	{
		return;
	}
	while (head->next != NULL)
	{
		head = head->next;
	}
	while (head != NULL)
	{
		save = head;
		head = head->prev;
		free(save);
	}
}
