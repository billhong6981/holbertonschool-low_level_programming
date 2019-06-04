#include "hash_tables.h"
/**
 * hash_table_create - a function that creates hash table
 * @size: size of table
 * Return: return the address of the hash table on success, otherwise NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_t;
	hash_node_t **ar;

	if (size == 0)
		return (NULL);
	h_t = malloc(sizeof(hash_table_t));
	if (!h_t)
		return (NULL);
	h_t->size = size;
	ar = malloc(sizeof(hash_node_t *) * size);
	if (!ar)
	{
		free(h_t);
		return (NULL);
	}
	h_t->array = ar;
	while (size)
		ar[--size] = NULL;
	return (h_t);
}
