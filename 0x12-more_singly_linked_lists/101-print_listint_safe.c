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
	size_t count = 0;
	size_t count1 = 0;
	const listint_t *hare, *tortoise;

	if (head == NULL)
		exit(98);
	count++;
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
	else
	{
		for (count1 = 0; count1 <= (count / 2 + 2); count1++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
		return (count / 2 + 3);
	}
}
