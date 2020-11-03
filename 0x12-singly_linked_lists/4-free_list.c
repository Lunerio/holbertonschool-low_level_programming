#include "lists.h"

/**
 * free_list - check the code for Holberton School students.
 * @head: pointer to pointer
 * Return: Always 0.
 */

void free_list(list_t *head)
{
	list_t *nextnew;

	while (head)
	{
		nextnew = head->next;
		free(head->str);
		free(head);
		head = nextnew;
	}

}
