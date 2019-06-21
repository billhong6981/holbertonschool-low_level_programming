#include "deck.h"
/**
 * sw_node_p - swaps two nodes instead swaps two numbers
 * @list: head of linked list
 * @node_a: node a
 * @node_b: node b
 * Return: void
 */
void sw_node_p(deck_node_t **list, deck_node_t **node_a, deck_node_t **node_b)
{
	deck_node_t *temp_prev, *temp_next;

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
 * sw_node_n - swaps two nodes instead swaps two numbers
 * @list: head of linked list
 * @node_a: node a
 * @node_b: node b
 * Return: void
 */
void sw_node_n(deck_node_t **list, deck_node_t **node_b, deck_node_t **node_a)
{
	deck_node_t *temp_prev, *temp_next;

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
 * val_node - a function returns a num for comparision purpose
 * @node: a node
 * Return: return the num for node
 */
int val_node(deck_node_t *node)
{
	int num = 0;
	char *value = NULL;

	value = (char *)node->card->value;
	num = node->card->kind * 13;
	if (value[0] == 'K')
		num += 13;
	else if (value[0] == 'Q')
		num += 12;
	else if (value[0] == 'J')
		num += 11;
	else if (value[0] == '1' && value[1])
		num += 10;
	else if (value[0] == 'A')
		num += 1;
	else
		num += value[0] - '0';
	return (num);
}

/**
 * cocktail_sort_list - a sort function use cocktail sort algorithm
 * @list: a head of doubly linked list
 * Return: void
 */
void cocktail_sort_list(deck_node_t **list)
{
	deck_node_t *node_a, *node_b, *current;
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
			if (node_a && val_node(node_b) > val_node(node_a))
			{
				sw_node_n(list, &node_b, &node_a);
				current = node_a;
				flag = 1;
			}
			current = current->next;
		}
		while (current->prev != NULL)
		{
			node_b = current;
			node_a = current->prev;
			if (node_a && val_node(node_b) < val_node(node_a))
			{
				sw_node_p(list, &node_a, &node_b);
				current = node_a;
				flag = 1;
			}
			current = current->prev;
		}
		if (flag == 0)
			break;
	}
}
/**
 * sort_deck - a function sort card of deck
 * @deck: a head of doubly linked list
 * Return: void
 */
void sort_deck(deck_node_t **deck)
{
	if (deck == NULL || *deck == NULL || !(*deck)->next)
		return;
	cocktail_sort_list(deck);
}
