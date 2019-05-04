#include "lists.h"

/**
 * add_dnodeint - a function adds new node from the head of linked list
 * @head: double pointer of the head
 * @n: integer
 *
 * Return: return new node address on success, NULL if fail
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (*head)
		(*head)->prev = new;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (new);
}
