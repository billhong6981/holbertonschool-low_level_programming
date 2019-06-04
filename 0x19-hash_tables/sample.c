#include "hash_tables.h"
/**
 * hash_table_create - a function that creates hash table
 * @size: size of table
 * Return: return the address of the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_t;
	hash_node_t *new_node, *current;
	unsigned long int i;

	if (size <= 0)
		return (NULL);
	h_t = malloc(sizeof(hash_table_t) * 1);
	if (!h_t)
		return (NULL);
	new_node = malloc(sizeof(hash_node_t) * 1);
	if (!new_node)
	{
		free(h_t);
		return (NULL);
	}
	h_t->array = &new_node;
	current = new_node;
	h_t->size = size;
	new_node->key = NULL;
	new_node->value = NULL;
	new_node->next = NULL;
	for (i = 1; i < size; i++)
	{
		new_node = malloc(sizeof(hash_node_t) * 1);
		if (!new_node)
		{
			free(h_t);
			free_node(h_t->array);
			return (NULL);
		}
		new_node->key = NULL;
		new_node->value = NULL;
		new_node->next = NULL;
		current->next = new_node;
		current = current->next;
	}
	return (h_t);
}

/**
 * free_node - frees allocated memory
 * @head: points to head of linked list
 * Return: void
 */
void free_node(hash_node_t **head)
{
	hash_node_t *current, *next;

	current = *head;
	while (current)
	{
		next = current;
		current = current->next;
		free(next);
	}
}
