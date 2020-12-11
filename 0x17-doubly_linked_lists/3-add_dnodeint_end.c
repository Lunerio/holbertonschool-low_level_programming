#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of a doubly linked list
 * @head: pointer to first element
 * @n: int to add to new node
 * Return: NULL on failure, or pointer to new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *act = *head;

	if (*head == NULL)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (new);
	}
	else
	{
		while (act->next != NULL)
		{
			act = act->next;
		}
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->prev = act;
		new->next = NULL;
		act->next = new;
		return (new);
	}
}
