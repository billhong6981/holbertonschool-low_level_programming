#include "hash_tables.h"
/**
 * hash_table_get - a function that retrieves a value associated with key
 * @ht: point to hash table
 * @key: key
 * Return: return value associated with key, otherwise Null
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;

	if (ht == NULL || key == NULL)
		return (NULL);
	idx = key_index((unsigned const char *)key, ht->size);
	if (ht->array[idx] == NULL)
		return (NULL);
	while (ht->array[idx])
	{
		if (strcmp(ht->array[idx]->key, key) == 0)
			return (ht->array[idx]->value);
		ht->array[idx] = ht->array[idx]->next;
	}
	return (NULL);
}
