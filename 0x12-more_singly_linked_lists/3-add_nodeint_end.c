#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 *add_nodeint_end - a function that adds new node at the end of the list
 *@head: a double pointer holds the address of the head pointer
 *@n: integer
 *
 *Return: the address of new node on success, NULL if fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;

	if (head == NULL)
		return (NULL);
	if ((*head) == NULL)
		(*head) = add_nodeint(head, n);
	else
	{
		current = (*head);
		while ((current->next) != NULL)
			current = current->next;
		add_nodeint(&(current->next), n);
	}
	return ((*head));
}

/**
 * add_nodeint - a function that adds new node to the beginning of the list
 *@head: a double pointer to hold the head address of the list
 *@n: integer
 *
 *Return: return the head address of the list on success
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = (*head);
	(*head) = newnode;
	return ((*head));
}
