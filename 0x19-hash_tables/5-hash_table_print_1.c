#include "hash_tables.h"
/**
 * hash_table_print - a function prints a hash table
 * @ht: points to hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	char *temp_k1, *temp_v1, *temp_k2, *temp_v2;
	int flag = 0, flag_1 = 0;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (!(ht->array[i]))
			continue;
		if (flag == 0)
		{
			printf("{");
			flag = 1;
		}
		while (ht->array[i])
		{
			if (flag_1 == 1)
				printf(", ");
			temp_k1 = ht->array[i]->key;
			temp_v1 = ht->array[i]->value;
				flag_1 = 1;
			}
			ht->array[i] = ht->array[i]->next;
			if (ht->array[i])
			{
				if (flag_1 == 1

				printf("'%s': '%s'", temp_k, temp_v);
				printf(", ");
			}
		}
		print("'%s': '%s'", temp_k, temp_v);
	}
	if (flag == 0)
		printf("{");
	printf("}\n");
}
