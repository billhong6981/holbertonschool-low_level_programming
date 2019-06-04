#include "hash_tables.h"

/**
 * hash_table_delete - a function deletes the hash table and free memories
 * @ht: points to hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t **h;

	h = ht->array;
	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (h[i] != NULL)
			free_node(h[i]);
	}
        free(ht->array);
	free(ht);
}

/**
 * free_node - frees allocated memory
 * @head: points to head of linked list
 * Return: void
 */
void free_node(hash_node_t *head)
{
	hash_node_t *current, *nxt;

	current = head;
	while (current)
	{
		nxt = current;
		current = current->next;
		free(nxt->value);
		free(nxt->key);
		free(nxt);
	}
}
