#include "search_algos.h"
/**
 * linear_skiplist - a search function use linear search algorithm
 * @list: a head of linked list
 * @value: a value given to be searched
 * Return: return the address of search value if found, otherwise -1
 */
skiplist_t *linear_skiplist(skiplist_t *list, int value)
{
	skiplist_t *res = list, *end = NULL;

	if (!list)
		return (NULL);
	end = list->express;
	while (res != end)
	{
		printf("Value checked index [%lu] = [%d]\n",
		       res->index, res->n);
		if (res->n == value)
			return (res);
		res = res->next;
	}
	return (NULL);
}

/**
 * linear_skip - a search function use skiplist-express search algorithm
 * @list: a head of the singlely linked list
 * @value: a value given to search for
 * Return: return the address of value if found, otherwise NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node = list, *res = list;

	if (!list)
		return (NULL);
	node = node->express;
	while (node)
	{
		if (node->n < value)
		{
			printf("Value checked at index [%lu] = [%d]\n",
			       node->index, node->n);
			res = node;
			node = node->express;
		}
		else
			break;
	}
	if (res->n == value)
		return (res);
	if (!node)
	{
		node = res;
		while (node->next)
			node = node->next;
	}
	else
		printf("Value checked at index [%lu] = [%d]\n",
		       node->index, node->n);
	printf("Value found between indexes [%lu] and [%lu]\n",
	       res->index, node->index);
	return (linear_skiplist(res, value));
}
