#include "lists.h"

/**
 * dlistint_len - a function returns number of nodes
 * @h: points to head
 *
 * Return: return number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t i = 0;

	current = h;
	if (!current)
		return (i);
	while (current)
	{
		i++;
		current = current->next;
	}
	return (i);
}
