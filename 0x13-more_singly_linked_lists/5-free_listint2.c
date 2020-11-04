#include "lists.h"

/**
 * free_listint2 - free each node from memory and set the head pointer to NULL
 * @head: pointer to first element
 */

void free_listint2(listint_t **head)
{
	listint_t *aux;

	aux = *head;

	while (aux)
	{
		aux = aux->next;
		free(aux);
	}
	*head = NULL;
}
