#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - a function adds a node to linked list from head node
 * @head: a double pointer to head node
 * @str: a pointer to string
 *
 * Return: return the pointer to the node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	char *s;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	s = strdup(str);
	for (i = 0; s[i]; i++)
		;
	newnode->len = i;
	newnode->str = s;
	newnode->next = (*head);
	(*head) = newnode;
	return ((*head));
}
