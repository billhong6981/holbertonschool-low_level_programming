#include "hash_tables.h"
/**
 * hash_table_print - a function prints a hash table
 * @ht: points to hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int flag = 0, no_last = 0;
	hash_node_t *temp;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (!((ht->array)[i]))
			continue;
		if (flag == 0)
		{
			printf("{");
			flag = 1;
		}
		temp = ht->array[i];
		while (temp)
		{
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
			if (next_node(temp) != 0)
				no_last = 1;
			else
			{
				if (not_last(ht, i + 1) != 0)
					no_last = 1;
			}
			if (no_last == 1)
			{
				printf(", ");
				no_last = 0;
			}
		}
	}
	if (flag == 0)
		printf("{");
	printf("}\n");
}

/**
 * next_node - checks next node whether NULL or not
 * @head: points to address of linked list node
 * Return: return 1 if next node is not NULL, otherwise 0
 */
int next_node(hash_node_t *head)
{
	int flag = 0;

	if (head != NULL)
		flag = 1;
	return (flag);
}

/**
 * not_last - checks whether the node is last or not
 * @ht: point to hash table
 * @J: index number
 * Return: return 1 if isn't the last empty node, otherwise o
 */
int not_last(const hash_table_t *ht, unsigned long int j)
{
	int flag = 0;

	for (; j < ht->size; j++)
	{
		if ((ht->array)[j] != NULL)
		{
			flag = 1;
			return (flag);
		}
	}
	return (flag);
}
