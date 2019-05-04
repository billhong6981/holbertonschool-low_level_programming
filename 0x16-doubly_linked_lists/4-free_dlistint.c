#include "lists.h"

/**
 * free_dlistint - a function frees the double linked list
 * @head: points to head
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
