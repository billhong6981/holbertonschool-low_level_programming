#include "lists.h"

/**
 * insert_dnodeint_at_index - a function inserts a new node at a given position
 * @h: a double pointer of the head
 * @idx: a given index to the number of node
 * @n: a integer to be stored in new node
 * Return: return the new node address, or NULL on fail
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new;
	unsigned int i = 0, len = 0;

	current = *h;
	if (!idx)
		return (add_dnodeint(h, n));
	while (current)
	{
		current = current->next;
		len++;
	}
	if (idx > len - 1)
		return (NULL);
	current = *h;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	while (current->next)
	{
		if (i == idx - 1)
		{
			current->next->prev = new;
			new->next = current->next;
			current->next = new;
			new->prev = current;
			break;
		}
		current = current->next;
		i++;
	}
	return (new);
}
