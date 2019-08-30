#include "search_algos.h"
/**
 * linear_list - a search function use linear search algorithm
 * @list: a head of linked list
 * @start: a start index of the node in list
 * @end: a end index of the node in list
 * @value: a value given to be searched
 * Return: return the address of search value if found, otherwise -1
 */
listint_t *linear_list(listint_t *list, size_t start, size_t end, int value)
{
	size_t i;
	listint_t *res = list;

	if (!list)
		return (NULL);
	while (res->index != start)
		res = res->next;
	for (i = start; i <= end; i++)
	{
		printf("Value checked index [%lu] = [%d]\n", i, res->n);
		if (res->n == value)
			return (res);
		res = res->next;
	}
	return (NULL);
}

/**
 * jump_list - a search function use jump search algorithm
 * @list: a head of the singlely linked list
 * @size: the number of nodes in the list
 * @value: a value given to search for
 * Return: return the address of value if found, otherwise NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t left, right, bloc;
	listint_t *res = list;

	if (!list)
		return (NULL);
	bloc = sqrt(size);
	right = bloc;
	left = 0;
	while (res->index != right)
		res = res->next;
	while (res->n < value)
	{
		left = right;
		right += bloc;
		printf("Value checked at index [%lu] = [%d]\n", left, res->n);
		if (right >= size)
		{
			right = size - 1;
			break;
		}
		while (res->index != right && res->next != NULL)
			res = res->next;
	}
	if (res->n == value)
		return (res);
	printf("Value checked at index [%lu] = [%d]\n", right, res->n);
	printf("Value found between indexes [%lu] and [%lu]\n", left, right);
	return (linear_list(list, left, right, value));
}
