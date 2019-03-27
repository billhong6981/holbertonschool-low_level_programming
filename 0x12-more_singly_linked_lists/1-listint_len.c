#include <stddef.h>
#include "lists.h"
/**
 * listint_len - a function prints the number of nodes in list
 * @h: a head pointer of the list
 *
 * Return: return the size of list on success
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
