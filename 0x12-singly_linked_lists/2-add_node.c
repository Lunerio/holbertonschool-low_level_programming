#include "lists.h"

/**
 * add_node - add new node on the header
 * @head: pointer to head position
 * @str: string to add to the node
 * Return: position of new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	int i;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (0);
	}
	(*newnode).str = strdup(str);
	for (i = 0; str[i] != 0; i++)
	{
	}
	(*newnode).len = i;
	(*newnode).next = (*head);
	(*head) = newnode;

	return (newnode);
}
