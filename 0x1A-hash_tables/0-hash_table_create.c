#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table. returns pointer to table
 * @size: size of the array
 * Return: pointer to the new table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	(table)->size = size;
	(table)->array = malloc(sizeof(hash_table_t **) * size);
	if ((table)->array == NULL)
		return (NULL);

	return (table);
}
