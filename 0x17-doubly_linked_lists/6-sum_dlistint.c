#include "lists.h"

/**
 * sum_dlistint - sum all the ints in a doubly linked list
 * @head: Pointer to first element of the list
 * Return: The sum of all elements as an int
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

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
