#include "hash_tables.h"
/**
 * hash_table_set - a function that adds element to hash table
 * @ht: point to hash table
 * @key: a key string
 * @value: a value string
 * Return: 1 on success, otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *next_node, *temp;
	unsigned long int idx;

	if (!key)
		return (0);
	idx = key_index((unsigned const char *)key, ht->size);
	if ((ht->array)[idx] != NULL)
	{
		next_node = (ht->array)[idx];
		temp = (ht->array)[idx];
		while (temp != NULL)
		{
			if (strcmp(temp->key, key) == 0)
			{
				free(temp->value);
				temp->value = strdup(value);
				return (1);
			}
			temp = temp->next;
		}
		(ht->array)[idx] = add_new_node(key, value);
		if ((ht->array)[idx] == NULL)
			return (0);
		(ht->array)[idx]->next = next_node;
	}
	else
	{
		(ht->array)[idx] = add_new_node(key, value);
		if ((ht->array)[idx] == NULL)
			return (0);
	}
	return (1);
}

/**
 * add_new_node - add a new node
 * @key: key
 * @value: value
 * Return: return a new_node address
 */
hash_node_t *add_new_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (NULL);
	if (value)
		new_node->value = strdup(value);
	new_node->key = strdup(key);
	new_node->next = NULL;
	return (new_node);
}

/**
 * node_travisal - a function returns the number of node current have
 * @head: point to head of linked list
 * Return: the number of nodes
 */
unsigned long int node_travisal(hash_node_t **head)
{
	unsigned long int i = 0;
	hash_node_t *current;

	current = *head;
	while (current)
	{
		current = current->next;
		i++;
	}
	return (i);
}
