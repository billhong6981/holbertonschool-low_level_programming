#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a linked list
 * @head: a head pointer of the list
 * @index: a number of node
 *
 * Return: return a pointer to that node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	current = head;
	for (i = 0; (i < index) && (current != NULL); i++)
		current = current->next;
	return (current);
}
