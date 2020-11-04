#include "lists.h"

/**
 * get_nodeint_at_index - get the node in the told index
 * @head: pointer to the head node
 * @index: index of the node asked
 * Return: Address of the node asked
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < index; i++)
		{
			head = head->next;
		}
	}
	return (head);
}
