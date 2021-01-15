#include "hash_tables.h"

/**
 * hash_table_set - add element to a given hash table
 * @ht: hash table
 * @key: string to give. Cannot be empty
 * @value: Value to add to that key.
 * Return: 1 if success, 0 if not
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	const unsigned char *new_key;
	hash_node_t *newnode;
	unsigned long int size;
	unsigned long int index;
	char *new_value;

	if (key == NULL)
		return (0);
	if (value == NULL)
		return (0);
	if (ht == NULL)
		return (0);
	if (strcmp(key, "") == 0)
		return (0);

	new_key = (unsigned char *)strdup(key);
	new_value = strdup(value);
	size = ht->size;
	index = key_index(new_key, size);

	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
		return (0);

	newnode->key = (char *)new_key;
	newnode->value = new_value;

	if (ht->array[index] != NULL)
		newnode->next = ht->array[index];
	else
		newnode->next = NULL;

	ht->array[index] = newnode;

	return (1);
}
