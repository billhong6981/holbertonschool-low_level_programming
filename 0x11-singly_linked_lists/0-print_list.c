#include "lists.h"
#include <stdio.h>
/**
 * print_list - a function iterate all the linked list node and print it
 * @h: a pointer to head of first node
 *
 * Return: return numbers of node printed on sucess
 */
size_t print_list(const list_t *h)
{
	size_t i;
	list_t *hd = (list_t *)h;

	for (i = 0; hd != NULL; i++)
	{
		if (hd->str == NULL)
			hd->len = 0;
		printf("[%d] %s\n", hd->len, hd->str);
		hd = hd->next;
	}
	return (i);
}
