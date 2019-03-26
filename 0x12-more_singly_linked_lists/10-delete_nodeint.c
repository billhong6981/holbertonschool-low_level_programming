#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at index index of
 * a listint_t linked list.
 * @head: a double pointer that holds the head address of the list
 * @index: a position of the node in the list
 *
 * Return: return a value of the deleted node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *next = NULL;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		free(current);
	}
	else
	{
		for (i = 0; i < index - 1; i++)
		{
			if (current->next == NULL)
				return (-1);
			current = current->next;
		}
		next = current->next;
		current->next = next->next;
		free(next);
	}
	return (1);
}
