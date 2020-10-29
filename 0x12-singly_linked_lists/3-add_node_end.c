#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *temp;
	int si;

	temp = *head;

	if (str == NULL)
	{
		return (0);
	}
	for (si = 0; str[si] != '\0'; si++)
	{
	}

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (0);
	}

	(*newnode).str = strdup(str);
	(*newnode).len = si;
	(*newnode).next = NULL;

	if (*head == NULL)
	{
		(*head) = newnode;
		return (newnode);
	}

	while ((*temp).next)
	{
		temp = (*temp).next;
        }

	(*temp).next = newnode;
	return (newnode);
}
/**
***********
*/
