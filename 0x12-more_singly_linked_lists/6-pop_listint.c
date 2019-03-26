#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * pop_listint - a function that deletes the head node from the list and
 * returns the head node data
 * @head: a double pointer that holds the address of the list head pointer
 *
 * Return: return the data of the head node
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int res;

	if (head == NULL || *head == NULL)
		return (0);
	current = *head;
	*head = current->next;
	res = current->n;
	free(current);
	return (res);
}
