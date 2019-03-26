#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_nodeint - a function that adds new node to the beginning of the list
 *@head: a double pointer to hold the head address of the list
 *@n: integer
 *
 *Return: return the head address of the list on success
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = (*head);

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
