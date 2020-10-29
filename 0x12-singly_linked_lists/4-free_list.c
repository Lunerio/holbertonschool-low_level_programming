#include "lists.h"

/**
 * free_list - free the memory allocated for each node
 * @head: pointer to the header
 */

void free_list(list_t *head)
{
	list_t *new = malloc(sizeof(list_t));

	new = head;

	if ((*new).next != NULL)
	{

		free_list((*new).next);
	}

	free(head);
}
