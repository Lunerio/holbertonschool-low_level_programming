#include "lists.h"

/**
 * free_listint2 - free each node from memory and set the head pointer to NULL
 * @head: pointer to first element
 */

void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (head == NULL)
	{
		return;
	}

	aux = *head;

	while (aux)
	{
		free(aux);
		aux = aux->next;
	}
	*head = NULL;
}
