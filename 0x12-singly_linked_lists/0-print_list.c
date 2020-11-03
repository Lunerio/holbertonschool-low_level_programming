#include "lists.h"

/**
 * print_list - Print elements from a linked list
 * @h: pointer to the head element
 * Return: Count of elements of linked list
 */

size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h)
	{
		if ((*h).str == NULL)
		{
			(*h).str = "(nil)";
			(*h).len = 0;
		}

		printf("[%d] %s\n", (*h).len, (*h).str);
		h = (*h).next;
		count++;
	}
	return (count);
}
