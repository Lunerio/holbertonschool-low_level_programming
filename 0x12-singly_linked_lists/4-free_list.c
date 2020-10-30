#include "lists.h"

/**
 * free_list - free the memory allocated for each node
 * @head: pointer to the header
 */

void free_list(list_t *head)
{
	list_t *save;
	list_t next;

	save = head;
	while (save)
	{
		next = (*save).next;
		free(save);
		save = next;
	}
}
