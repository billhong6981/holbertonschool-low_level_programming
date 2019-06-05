#include "hash_tables.h"
/**
 * shash_table_create - creates a sorted hash table
 * @size: size of hash table
 * Return: return hash table on success, otherwise NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *h_t;
	shash_node_t **ar;

	if (size == 0)
		return (NULL);
	h_t = malloc(sizeof(shash_table_t));
	if (!h_t)
		return (NULL);
	h_t->size = size;
	ar = malloc(sizeof(shash_node_t *) * size);
	if (!ar)
	{
		free(h_t);
		return (NULL);
	}
	h_t->array = ar;
	while (size)
		ar[--size] = NULL;
	h_t->shead = NULL;
	h_t->stail = NULL;
	return (h_t);
}

/**
 * shash_table_set - a function that adds element to sorted hash table
 * @ht: point to hash table
 * @key: a key string
 * @value: a value string
 * Return: 1 on success, otherwise 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *next_node, *temp;
	unsigned long int idx;

	if (!ht || !key)
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
		(ht->array)[idx] = add_new_n(ht, key, value);
		if ((ht->array)[idx] == NULL)
			return (0);
		(ht->array)[idx]->next = next_node;
	}
	else
	{
		(ht->array)[idx] = add_new_n(ht, key, value);
		if ((ht->array)[idx] == NULL)
			return (0);
	}
	return (1);
}

/**
 * sorted_func - a function sorts new_node in order
 * @ht: points to hash table
 * @new_node: new node added
 * Return: return new node on success, otherwise NULL
 */
shash_node_t *sorted_func(shash_table_t **ht, shash_node_t *new_node)
{
	shash_node_t *current;
	int cmp;
	shash_table_t *h_t;

	h_t = *ht;
	if (!h_t)
		return (NULL);
	if (h_t->shead == NULL)
	{
		h_t->shead = new_node;
		h_t->stail = new_node;
		return (new_node);
	}
	current = h_t->shead;
	while (current)
	{
		cmp = strcmp(current->key, new_node->key);
		if (cmp < 0)
			current = current->snext;
		else
		{
			if (h_t->shead == current)
			{
				new_node = add_in_front(ht, new_node);
				return (new_node);
			}
			new_node = add_in_between(current, new_node);
			return (new_node);
		}
	}
	new_node = add_in_end(ht, new_node);
	return (new_node);
}

/**
 * add_in_front - adds new node in front of double linked list
 * @ht: points to hash table
 * @new_node: a new node desired to insert
 * Return: return new node on success, otherwise NULL
 */
shash_node_t *add_in_front(shash_table_t **ht, shash_node_t *new_node)
{
	shash_node_t *current;

	if (!ht || !new_node)
		return (NULL);
	current = (*ht)->shead;
	(*ht)->shead = new_node;
	new_node->snext = current;
	current->sprev = new_node;
	new_node->sprev = NULL;
	return (new_node);
}

/**
 * add_in_between - adds new node in front of double linked list
 * @current: points to current node
 * @new_node: a new node desired to insert
 * Return: return new node on success, otherwise NULL
 */
shash_node_t *add_in_between(shash_node_t *current, shash_node_t *new_node)
{
	if (!current || !new_node)
		return (NULL);
	current->sprev->snext = new_node;
	new_node->snext = current;
	new_node->sprev = current->sprev;
	current->sprev = new_node;
	return (new_node);
}

/**
 * add_in_end - adds new node in front of double linked list
 * @ht: points to hash table
 * @new_node: a new node desired to insert
 * Return: return new node on success, otherwise NULL
 */
shash_node_t *add_in_end(shash_table_t **ht, shash_node_t *new_node)
{
	shash_node_t *current;

	if (!ht || !new_node)
		return (NULL);
	current = (*ht)->stail;
	(*ht)->stail = new_node;
	new_node->snext = NULL;
	current->snext = new_node;
	new_node->sprev = current;
	return (new_node);
}

/**
 * add_new_n - add a new node
 * @ht: points to sorted hash table
 * @key: key
 * @value: value
 * Return: return a new_node address
 */

shash_node_t *add_new_n(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node;

	if (!key || !ht)
		return (NULL);
	new_node = malloc(sizeof(shash_node_t));
	if (!new_node)
		return (NULL);
	if (value)
	{
		new_node->value = strdup(value);
		if (!new_node->value)
		{
			free(new_node);
			return (NULL);
		}
	}
	if (key)
	{
		new_node->key = strdup(key);
		if (!new_node->key)
		{
			free(new_node);
			free(new_node->value);
			return (NULL);
		}
	}
	new_node->next = NULL;
	new_node->sprev = NULL;
	new_node->snext = NULL;
	new_node = sorted_func(&ht, new_node);
	return (new_node);
}

/**
 * shash_table_get - a function that retrieves a value associated with key
 * @ht: point to hash table
 * @key: key
 * Return: return value associated with key, otherwise Null
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx;
	shash_node_t *temp;

	if (ht == NULL || key == NULL)
		return (NULL);
	idx = key_index((unsigned const char *)key, ht->size);
	if (ht->array[idx] == NULL)
		return (NULL);
	temp = ht->array[idx];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}

/**
 * shash_table_print - a function prints a hash table
 * @ht: points to hash table
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;

	if (!ht)
		return;
	current = ht->shead;
	if (!current)
	{
		printf("{}\n");
		return;
	}
	printf("{");
	while (current)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current != ht->stail)
			printf(", ");
		else
			printf("}\n");
		current = current->snext;
	}
}

/**
 * shash_table_print_rev - a function prints sorted hash table reverse
 * @ht: points to hash table
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;

	if (!ht)
		return;
	current = ht->stail;
	if (!current)
	{
		printf("{}\n");
		return;
	}
	printf("{");
	while (current)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current != ht->shead)
			printf(", ");
		else
			printf("}\n");
		current = current->sprev;
	}
}

/**
 * shash_table_delete - a function deletes the hash table and free memories
 * @ht: points to hash table
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current, *nxt;

	if (!ht)
		return;
	current = ht->shead;
	if (!current)
	{
		free(ht->array);
		free(ht);
		return;
	}
	while (current)
	{
		nxt = current;
		current = current->snext;
		if (nxt->value)
			free(nxt->value);
		free(nxt->key);
		free(nxt);
	}
	free(ht->array);
	free(ht);
}
