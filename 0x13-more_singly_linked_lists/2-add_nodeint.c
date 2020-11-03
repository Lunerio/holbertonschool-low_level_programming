#include "lists.h"

/**
 * add_nodeint - Create new node and add it to the head
 * @head: pointer to the head
 * @n: int in the struct
 * Return: Memory address of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (0);
	}

	newnode->n = n;

	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
