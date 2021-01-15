#include "hash_tables.h"

/**
 * hash_table_delete - free the memory and delete the hash table
 * @ht: table to delete
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *list;
	hash_node_t *aux;
	unsigned long int index = 0;

	if (ht == NULL)
		return;

	while (index < ht->size)
	{
		list = ht->array[index];
		while (list)
		{
			aux = list;
			free(list->key);
			free(list->value);
			list = list->next;
			free(aux);
		}
		ht->array[index] = NULL;
		index++;
	}
	free(ht->array);
	free(ht);
}
