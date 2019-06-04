#include "hash_tables.h"
/**
 * hash_djb2 - a function that generates hash number
 * @str: a string
 * Return: return hash number
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	if (!str)
		return (EXIT_FAILURE);
	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
