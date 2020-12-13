#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes any node at given index
 * @head: pointer to first element
 * @index: index to delete
 * Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *prev_node, *next_node;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (current->prev != NULL)
	{
		while (current->prev != NULL)
			current = current->prev;
	}
	if (index > dlistint_len(current))
		return (-1);
	if (index == 0)
	{
		if (current->next != NULL)
		{
			*head = current->next;
			(*head)->prev = NULL;
			free(current);
			return (1);
		}
		else
		{
			free(*head);
			*head = NULL;
			return (1);
		}
	}
	for (i = 0; i < index; i++)
	{
		current = current->next;
	}
	prev_node = current->prev;
	next_node = current->next;
	prev_node->next = next_node;
	next_node->prev = prev_node;
	free(current);
	return (1);
}

/**
 * dlistint_len - get number of elements in a doubly linked list
 * @h: pointer to first element
 * Return: Number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}
	if (h->prev != NULL)
	{
		while (h->prev != NULL)
		{
			h = h->prev;
		}
	}
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
