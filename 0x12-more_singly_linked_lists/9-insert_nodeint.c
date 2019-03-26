#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inser a node at given position
 * @head: a double pointer holds the address of linked list head address
 * @idx: a index of node
 * @n: a integer value to add to the node
 *
 * Return: return the address of new node on success, NULL if fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head;
	unsigned int i = 0;

	if ((head == NULL) || (*head == NULL && idx != 0))
		return (NULL);
	while (current != NULL)
	{
		i++;
		current = current->next;
	}
	if (idx >= i)
		return (NULL);
	if (idx == 0)
		current = add_nodeint(head, n);
	else
	{
		current = *head;
		for (i = 0; i < idx - 1; i++)
			current = current->next;
		current = add_nodeint(&(current->next), n);
	}
	return (current);
}
