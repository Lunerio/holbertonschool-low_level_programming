#include "lists.h"

/**
 * free_list - free the memory allocated for each node
 * @head: pointer to the header
 */

void free_list(list_t *head)
{
	list_t *save;

	while (head != NULL)
	{
		save = head;
		head = (*head).next;
		free((*save).str);
		free(save);
	}
	free(head);
}
