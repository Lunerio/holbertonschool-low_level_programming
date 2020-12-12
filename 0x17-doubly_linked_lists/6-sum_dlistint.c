#include "lists.h"

int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);

	if (head->prev != NULL)
	{
		while (head->prev != NULL)
		{
			head = head->prev;
		}
	}
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
