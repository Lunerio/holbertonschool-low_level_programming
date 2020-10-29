#include "lists.h"

size_t list_len(const list_t *h)
{
	unsigned int count = 0;
	if (h == NULL)
	{
		return (0);
	}

	while (h)
	{
		h = (*h).next;
		count ++;
	}
	return (count);
}
