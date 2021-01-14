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
	const unsigned char *new_key;
	unsigned long int size;

	if (ht == NULL)
		return (NULL);
	if (key == NULL || strcmp(key, "") == 0)
		return (NULL);

	new_key = (unsigned char *)key;
	size = ht->size;
	index = key_index(new_key, size);
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
		printf("antes de moverse\n");
		ht->array[index] = ht->array[index]->next;
		printf("luego de moverse\n");
	}

	return (NULL);
}
