#include "sort.h"

/**
 * swap_node - swaps two nodes instead swaps two numbers
 * @list: head of linked list
 * @node_a: node a
 * @node_b: node b
 * Return: void
 */
void swap_node(listint_t **list, listint_t **node_a, listint_t **node_b)
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
 * insertion_sort_list - sorts a integer of array using insertion algorithm
 * @list: a integer of doublely linked list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node_a, *node_b, *current;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	current = (*list)->next;
	while (current)
	{
		node_b = current;
		node_a = current->prev;
		while (node_a && node_b->n < node_a->n)
		{
			swap_node(list, &node_a, &node_b);

			node_a = node_b->prev;
			print_list(*list);
		}
		current = current->next;
	}
}
