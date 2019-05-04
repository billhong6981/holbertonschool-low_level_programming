#include "lists.h"

/**
 * add_dnodeint_end - adds the new node from the end
 * @head: a address of the head pointer
 * @n: integer
 *
 * Return: return the address of the new node, NULL if fail
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current, *new;

	current = *head;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (!current)
	{
		new->next = current;
		new->prev = NULL;
		(*head) = new;
		return (new);
	}
	while (current->next)
	{
		current = current->next;
	}
	new->next = current->next;
	current->next = new;
	new->prev = current;
	return (new);
}
