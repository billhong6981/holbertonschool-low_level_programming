#include "lists.h"

/**
 * print_dlistint - a function prints contents in double linked list
 * @h: points to head
 *
 * Return: return number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *current;

	current = h;
	if (current == NULL)
		return (i);
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		i++;
	}
	return (i);
}
