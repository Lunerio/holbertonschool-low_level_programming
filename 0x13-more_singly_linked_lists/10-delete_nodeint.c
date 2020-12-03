#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at given index
 * @head: pointer to head node
 * @index: index to delete
 * Return: 1 on success, -1 on error
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p_index = *head;
	listint_t *p_prev = *head;
	unsigned int i;


	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(p_index);
		return (1);
	}
	for (i = 0; (i < (index - 1)) && (p_prev->next != NULL); i++)
	{
		p_prev = p_prev->next;
	}
	if (p_prev->next == NULL)
	{
		return (-1);
	}

	for (i = 0; (i < index) && (p_index != NULL); i++)
	{
		p_index = p_index->next;
	}

	p_prev->next = p_index->next;
	free(p_index);

	return (1);
}
