#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes any node at given index
 * @head: pointer to first element
 * @index: index to delete
 * Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *prev_node;
	dlistint_t *next_node;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (current->prev != NULL)
	{
		while (current->prev != NULL)
			current = current->prev;
	}
	if (index == 0)
	{
		next_node = (*head)->next;
		(*head) = next_node;
		next_node->prev = NULL;
		free(current);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (current->next  == NULL)
		{
			return (-1);
		}
		current = current->next;
	}
	prev_node = current->prev;
	next_node = current->next;
	prev_node->next = next_node;
	next_node->prev = prev_node;
	free(current);
	return (1);
}
