#include "sort.h"

/**
 * swap_node_prev - swaps two nodes instead swaps two numbers
 * @list: head of linked list
 * @node_a: node a
 * @node_b: node b
 * Return: void
 */
void swap_node_prev(listint_t **list, listint_t **node_a, listint_t **node_b)
{
	listint_t *temp_prev, *temp_next;

	temp_prev = (*node_a)->prev;
	temp_next = (*node_b)->next;
	if ((*node_a)->prev)
		temp_prev->next = *node_b;
	else
		*list = *node_b;
	if ((*node_b)->next)
		temp_next->prev = *node_a;
	(*node_a)->prev = *node_b;
	(*node_b)->next = *node_a;
	(*node_b)->prev = temp_prev;
	(*node_a)->next = temp_next;
}

/**
 * swap_node_next - swaps two nodes instead swaps two numbers
 * @list: head of linked list
 * @node_a: node a
 * @node_b: node b
 * Return: void
 */
void swap_node_next(listint_t **list, listint_t **node_b, listint_t **node_a)
{
	listint_t *temp_prev, *temp_next;

	temp_prev = (*node_b)->prev;
	temp_next = (*node_a)->next;
	if (temp_prev)
		temp_prev->next = *node_a;
	else
		*list = *node_a;
	if (temp_next)
		temp_next->prev = *node_b;
	(*node_a)->next = *node_b;
	(*node_b)->prev = *node_a;
	(*node_a)->prev = temp_prev;
	(*node_b)->next = temp_next;
}

/**
 * cocktail_sort_list - sorts a integer of array using cocktail sort algorithm
 * @list: a integer of doublely linked list
 * Return: void
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *node_a, *node_b, *current;
	int flag;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	current = *list;
	while (1)
	{
		flag = 0;
		while (current->next != NULL)
		{
			node_b = current;
			node_a = current->next;
			if (node_a && node_b->n > node_a->n)
			{
				swap_node_next(list, &node_b, &node_a);
				current = node_a;
				print_list(*list);
				flag = 1;
			}
			current = current->next;
		}
		while (current->prev != NULL)
		{
			node_b = current;
			node_a = current->prev;
			if (node_a && node_b->n < node_a->n)
			{
				swap_node_prev(list, &node_a, &node_b);
				current = node_a;
				print_list(*list);
				flag = 1;
			}
			current = current->prev;
		}
		if (flag == 0)
			break;
	}
}
