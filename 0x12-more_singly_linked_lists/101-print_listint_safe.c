#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - a function that prints linked list
 * @head: a head pointer a linked list
 *
 * Return: return the number of nodes of the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count2 = 0, count = 1;
	size_t n, count1 = 0;
	const listint_t *hare, *tortoise, *current;

	if (head == NULL)
		exit(98);
	tortoise = head;
	hare = head->next;
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
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		return (count);
	}
	current = head;
	for (count1 = 0; current != tortoise; count1++)
		current = current->next;
	current = head;
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
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	printf("-> [%p] %d\n", (void *)head, head->n);
	return (n);
}
