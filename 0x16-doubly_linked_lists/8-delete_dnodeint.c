#include "lists.h"
/**
 * delete_first_node - a function deletes first node
 * @h: a double pointer to head address
 * Return: void
 */
void delete_first_node(dlistint_t **h)
{
	dlistint_t *current;

	current = *h;
	if (current->next)
		current->next->prev = NULL;
	*h = current->next;
	free(current);
}

/**
 * delete_last_node - a function deletes the last node in linked list
 * @h: double pointer to head address
 * Return: void
 */
void delete_last_node(dlistint_t **h)
{
	dlistint_t *current;

	current = *h;
	while (current->next->next)
		current = current->next;
	free(current->next);
	current->next = NULL;
}

/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: a double pointer of the head
 * @index: a index to the node position
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int i = 0, len = 0;

	current = *head;
	if (current == NULL)
		return (-1);
	while (current)
	{
		current = current->next;
		len++;
	}
	if (index > len - 1)
		return (-1);
	current = *head;
	if (index == 0)
	{
		delete_first_node(head);
		return (1);
	}
	if (index == len - 1)
	{
		delete_last_node(head);
		return (1);
	}
	while (1)
	{
		if (i == index - 1)
		{
			temp = current->next;
			current->next->next->prev = current;
			current->next = current->next->next;
			free(temp);
			break;
		}
		i++;
		current = current->next;
	}
	return (1);
}
