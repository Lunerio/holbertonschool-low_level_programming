#include "hash_tables.h"

/**
 * key_index - get the index of a given key
 * @key: key to analyze
 * @size: size of the hash table
 * Return: Index of the given key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_i;

	key_i = hash_djb2(key) % size;

	return (key_i);
}
