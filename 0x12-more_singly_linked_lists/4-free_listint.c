#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - a function deletes the list and free its memories
 * have been allocated
 * @head: a pointer to list head address
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *next, *current;

	if (head == NULL)
		return;
	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
