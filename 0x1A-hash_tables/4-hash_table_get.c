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

	if (ht == NULL)
		return (NULL);
	if (key == NULL || strcmp(key, "") == 0)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);

	if (ht->array[index]->key == key)
		return (ht->array[index]->value);

	while (ht->array[index]->next != NULL)
	{
		if (ht->array[index]->key == key)
			return (ht->array[index]->value);
		if (ht->array[index]->next == NULL)
			break;
		ht->array[index] = ht->array[index]->next;
	}
	return (NULL);
}
