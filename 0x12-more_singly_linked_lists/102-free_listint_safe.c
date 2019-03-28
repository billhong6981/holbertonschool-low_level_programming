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
	size_t n, count = 1, count1 = 0, count2 = 0;
	listint_t *hare, *tortoise, *current;

	if (h == NULL || (*h) == NULL)
		return (0);
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
	current = (*h);
	for (count1 = 0; current != tortoise; count1++)
		current = current->next;
	current = (*h);
	while (1)
	{
		if (current == hare)
			break;
		current = current->next;
		hare = tortoise->next;
		count2++;
		while (hare != tortoise)
		{
			hare = hare->next;
			if (current == hare)
				break;
		}
	}
	n = count - count1 + count2;

	for (count1 = 0; count1 < n; count1++)
	{
		current = (*h)->next;
		free(*h);
		(*h) = current;
	}
	(*h) = NULL;
	return (n);
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
