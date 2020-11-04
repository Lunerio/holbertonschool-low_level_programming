#include "lists.h"

/**
 * sum_listint - sum each int from each node
 * @head: pointer to head node
 * Return: sum of nodes ints
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head)
	{
		sum  += head->n;
		head = head->next;
	}
	return (sum);
}
