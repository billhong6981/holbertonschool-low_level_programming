#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all the data (n)
 * of a dlistint_t linked list.
 * @head: points to head
 *
 * Return: return the sum of data in linked list.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current;

	current = head;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
