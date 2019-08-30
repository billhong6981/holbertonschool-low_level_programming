#include "search_algos.h"

/**
 * linear_search - a search function use linear search algorithm
 * @array: a array to be searched
 * @size: a size of the array
 * @value: a value given to be searched
 * Return: return the index of search value if found, otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (!array)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
