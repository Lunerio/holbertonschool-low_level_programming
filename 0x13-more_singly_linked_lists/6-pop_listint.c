#include "lists.h"

/**
 * pop_listint - Remove the first node
 * @head: pointer to head node
 * Return: n of the node
 */

int pop_listint(listint_t **head)
{
	int save;
	listint_t *aux = *head;

	if (head == NULL)
	{
		return (0);
	}

	save = (*head)->n;
	*head = aux->next;
	free(aux);
	return (save);
}
