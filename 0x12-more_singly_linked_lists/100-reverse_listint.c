#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - a function that reverses a linked list
 * @head: a double pointer that holds a head address of the linked list
 *
 * Return: returns a head address of the list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *result, *next;

	result = NULL;
	if (head == NULL || (*head) == NULL)
		return (NULL);
	while ((*head) != NULL)
	{
		next = (*head)->next;
		(*head)->next = result;
		result = (*head);
		(*head) = next;
	}
	(*head) = result;
	return ((*head));
}
