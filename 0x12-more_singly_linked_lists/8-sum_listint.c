#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - a function that returns the sum of data in the linked list
 * @head: a head pointer to linked list
 *
 * Return: return the integer sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;

	if (head == NULL)
		return (0);
	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
