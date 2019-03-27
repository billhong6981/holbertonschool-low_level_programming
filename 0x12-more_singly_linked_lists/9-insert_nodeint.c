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

	if (head == NULL)
		return (NULL);
	if (idx == 0)
		(*head) = add_nodeint(head, n);
	else
	{
		current = *head;
		for (i = 0; i < idx - 1; i++)
		{
			if (current->next == NULL)
				return (NULL);
			current = current->next;
		}
			add_nodeint(&(current->next), n);
	}
	return ((*head));
}
