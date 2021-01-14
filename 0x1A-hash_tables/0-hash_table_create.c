#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table. returns pointer to table
 * @size: size of the array
 * Return: pointer to the new table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	(table)->size = size;

	(table)->array = malloc(8 * size);
	if ((table)->array == NULL)
	{
		free(table);
		return (NULL);
	}

	while (i < size)
	{
		(table)->array[i] = NULL;
		i++;
	}

	return (table);
}
