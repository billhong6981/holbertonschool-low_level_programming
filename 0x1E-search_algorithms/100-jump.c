#include "search_algos.h"
/**
 * linear_s - a search function use linear search algorithm
 * @array: a array to be searched
 * @start: a start index of the array
 * @end: a end index of the array
 * @value: a value given to be searched
 * Return: return the index of search value if found, otherwise -1
 */
int linear_s(int *array, int start, int end, int value)
{
	int i;

	if (!array)
		return (-1);
	for (i = start; i <= end; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

/**
 * jump_search - a search function use jump search algorithm
 * @array: a array to be searched
 * @size: a size of the array
 * @value: a value given to search for
 * Return: return the index of search value if found, otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	int left, right, len, bloc;

	if (!array)
		return (-1);
	len = (int)size;
	bloc = sqrt(len);
	right = bloc;
	left = 0;
	printf("Value checked array[%d] = [%d]\n", left, array[left]);
	if (array[left] == value)
		return (left);
	while (array[right] < value && right <= len)
	{
		left = right;
		right += bloc;
		printf("Value checked array[%d] = [%d]\n", left, array[left]);
	}
	printf("Value found between indexes [%d] and [%d]\n", left, right);
	if (right >= len)
		right = len - 1;
	return (linear_s(array, left, right, value));
}
