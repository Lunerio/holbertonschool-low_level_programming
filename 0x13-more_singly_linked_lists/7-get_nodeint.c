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
	listint_t *test;

	test = head;

	if (head == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < index; i++)
	{
		test = head->next;
		head = head->next;
		if (test == NULL)
		{
			return (NULL);
		}
	}

	return (test);
}
