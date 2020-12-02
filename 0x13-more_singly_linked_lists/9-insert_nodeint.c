#include "lists.h"

/**
 * insert_nodeint_at_index - create node at given index
 * @head: pointer to head node
 * @idx: Index
 * @n: int to add to new node
 * Return: Pointer to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newnode;
	listint_t *save = *head;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (*head == NULL)
	{
		newnode->next = NULL;
		*head = newnode;
		return (newnode);
	}
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (save->next == NULL)
			return (NULL);
		save = save->next;
	}

	newnode->next = save->next;
	save->next = newnode;

	return (newnode);
}
