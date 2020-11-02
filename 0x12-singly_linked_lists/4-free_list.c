#include "lists.h"

/**
 * free_list - free the memory allocated for each node
 * @head: pointer to the header
 */

void free_list(list_t *head)
{
	if (head == NULL)
	{
		return;
	}
	if (head)
	{
	free(head->str);
	free_list(head->next);
	}
	free(head);
}
