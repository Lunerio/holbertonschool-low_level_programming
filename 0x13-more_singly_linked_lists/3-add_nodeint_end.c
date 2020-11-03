#include "lists.h"

/**
 * add_nodeint_end - add new node to the tail of the list
 * @head: pointer to the header
 * @n: int to add
 * Return: pointer to the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *test;

	test = *head;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (0);
	}

	new->next = NULL;
	new->n = n;

	if (*head == NULL)
	{
		(*head) = new;
		return (new);
	}

	while ((*test).next)
	{
		test = (*test).next;
	}

	(*test).next = new;

	return (new);
}
