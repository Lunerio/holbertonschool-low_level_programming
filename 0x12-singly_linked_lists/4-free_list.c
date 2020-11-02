#include "lists.h"

/**
 * free_list - free the memory allocated for each node
 * @head: pointer to the header
 */

void free_list(list_t *head)
{
	list_t *tmp = NULL;

	while (head->next != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head->next);
		head = tmp;
	}
	free(head);
}
