#include "hash_tables.h"

/**
 * hash_table_print - print the key and value with a given format
 * @ht: hash table to check
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *save;
	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	while (index < ht->size)
	{
		save = ht->array[index];
		while (save)
		{
			if (flag == 1)
			{
				printf(", ");
				flag = 0;
			}
			printf("'%s'", save->key);
			printf(": ");
			printf("'%s'", save->value);
			flag = 1;
			save = save->next;
		}
		index++;
	}
	printf("}\n");
}
