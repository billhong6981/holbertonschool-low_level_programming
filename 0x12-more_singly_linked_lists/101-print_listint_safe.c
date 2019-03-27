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
	const listint_t *hare, *tortoise, *current;
	int flag = 0;

	if (head == NULL)
		exit(98);
	else
	{
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
		current = head;
		for (count1 = 0; current != tortoise; count1++)
			current = current->next;
		while (1)
		{
			if (head == tortoise && flag == 1)
				break;
			if (head == tortoise)
				flag = 1;
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
		return (count / 2 + 1);
	}
}
