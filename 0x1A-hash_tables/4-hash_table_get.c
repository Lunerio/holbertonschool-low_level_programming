#include "hash_tables.h"

/**
 * hash_table_get - return the value of a given key(the first one)
 * @ht: hash table to check
 * @key: key to get
 * Return: Pointer of char, or NULL in case there's no such key or error
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index;
	hash_node_t *save;

	if (ht == NULL)
		return (NULL);
	if (key == NULL || strcmp(key, "") == 0)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	save = ht->array[index];

	while (save != NULL)
	{
		if (strcmp(save->key, key) == 0)
			return (save->value);
		save = save->next;
	}
	return (NULL);
}
