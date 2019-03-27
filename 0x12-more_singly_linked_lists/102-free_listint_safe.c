#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - a function that free linked list memories
 * @h: a double head pointer a linked list
 *
 * Return: return the number of nodes of the linked list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	size_t count1 = 0;
	listint_t *hare, *tortoise, *nextnode;

	if (h == NULL)
		return (0);
	count++;
	tortoise = (*h);
	hare = (*h)->next;
	while (hare != NULL && hare != tortoise)
	{
		hare = hare->next;
		count++;
		if (hare != NULL && hare != tortoise)
		{
			count++;
			tortoise = tortoise->next;
			hare = hare->next;
		}
	}
	if (hare == NULL)
	{
		free_listint2(h);
		return (count);
	}
	else
	{
		for (count1 = 0; count1 < (count / 2 + 1); count1++)
		{
			nextnode = (*h)->next;
			free(*h);
			(*h) = nextnode;
		}
		(*h) = NULL;
		return (count / 2 + 1);
	}
}

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
