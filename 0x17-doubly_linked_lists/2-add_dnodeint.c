#include "lists.h"

/**
 * add_dnodeint - Create node at the head position in a doubly linked list
 * @head: pointer to head
 * @n: int to add in node
 * Return: Pointer to node, or NULL on failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *act;

	if (*head != NULL)
	{
		act = *head;
		if ((act)->prev != NULL)
		{
			while ((act)->prev != NULL)
			{
				act = act->prev;
			}
		}
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);

		new->n = n;
		new->prev = NULL;
		new->next = act;
		*head = new;
		return (new);
	}
	else
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
}
