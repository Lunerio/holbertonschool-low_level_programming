#include "lists.h"

/**
 * free_list - free the memory allocated for each node
 * @head: pointer to the header
 */

void free_list(list_t *head)
{
	list_t *aux;

	if (head == NULL)
	{
		return;
	}
	aux = head->next;
	free(head->str);
	free(head);
	head = aux;
	free_list(head);
}
