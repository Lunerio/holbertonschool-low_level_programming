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
	unsigned int num;

	if (*head == NULL)
		return (-1);

	if (current->prev != NULL)
	{
		while (current->prev != NULL)
			current = current->prev;
	}
	if (index == 0)
	{
		*head = current->next;
		if ((*head) == NULL)
			return (-1);
		(*head)->prev = NULL;
		free(current);
		return (1);
	}
	num = dlistint_len(current);
	for (i = 0; i < index; i++)
	{
		if (index > num)
		{
			prev_node = current->prev;
			prev_node->next = NULL;
			free(current);
			return (1);
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
