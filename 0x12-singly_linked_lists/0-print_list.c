#include "lists.h"

/**
 * print_list - Print elements from a linked list
 * @h: pointer to the head element
 * Return: Count of elements of linked list
 */

size_t print_list(const list_t *h)
{
	list_t *save = malloc(sizeof(list_t));
	int count = 0;

	(*save).str = (*h).str;
	(*save).len = (*h).len;
	(*save).next = (*h).next;

	while (save)
	{
		if ((*save).str == NULL)
		{
			(*save).str = "(nil)";
			(*save).len = 0;
		}

		printf("[%d] %s\n", (*save).len, (*save).str);
		save = (*save).next;
		count++;
	}
	return (count);
}
