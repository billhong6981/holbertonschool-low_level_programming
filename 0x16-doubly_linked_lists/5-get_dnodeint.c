#include "lists.h"

/**
 * get_dnodeint_at_index - a function gets contents from n node by index
 * @head: points to head
 * @index: the index to number of node
 *
 * Return: return the address of node, or NULL on fail
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	current = head;
	if (!head)
		return (NULL);
	while (current)
	{
		if (i == index)
			return (current);
		current = current->next;
		i++;
	}
	return (NULL);
}
