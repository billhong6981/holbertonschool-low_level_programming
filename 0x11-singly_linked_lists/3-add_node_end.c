#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - a function adds a node to linked list from the end node
 * @head: a double pointer to head node
 * @str: a pointer to string
 *
 * Return: return the pointer to the new node on success, NULL if fail
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current, *tailnode;
	char *s;
	unsigned int i;

	current = *head;
	if (current == NULL)
	{
		current = malloc(sizeof(list_t));
		if (current == NULL)
			return (NULL);
		s = strdup(str);
		for (i = 0; s[i]; i++)
			;
		current->len = i;
		current->str = s;
		current->next = (*head);
		(*head) = current;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;
		tailnode = malloc(sizeof(list_t));
		if (tailnode == NULL)
			return (NULL);
		current->next = tailnode;
		tailnode->next = NULL;
		s = strdup(str);
		tailnode->str = s;
		for (i = 0; s[i]; i++)
			;
		tailnode->len = i;
	}
	return ((*head));
}
