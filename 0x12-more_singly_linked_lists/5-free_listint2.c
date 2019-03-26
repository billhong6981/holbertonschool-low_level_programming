#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - a function deletes the list and free its memories
 * have been allocated and set the head pointer to NULL
 * @head: a double pointer holds the address of the list head address
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *next, *current;

	if (head == NULL || *head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
