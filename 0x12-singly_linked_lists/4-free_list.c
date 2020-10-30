#include "lists.h"

/**
 * free_list - free the memory allocated for each node
 * @head: pointer to the header
 */

void free_list(list_t *head)
{

	while (head)
	{
		free(head);
		head = (*head).next;
	}
	head = NULL;
}
