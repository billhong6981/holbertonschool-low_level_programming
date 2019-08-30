#include "search_algos.h"
/**
 * print_helper -  a function prints the array
 * @array: a array to print
 * @start: start index in array
 * @end: end index in array
 * Return: Void
 */
void print_helper(int *array, int start, int end)
{
	int i;

	if (!array)
		return;
	printf("Searching in array: ");
	for (i = start; i < end; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}

/**
 * binary_search - a search function use binary search algorithm
 * @array: a array to be searched
 * @size: a size of the array
 * @value: a value given to search for
 * Return: return the index of search value if found, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	int mid, left, right;

	right = (int)size - 1;
	left = 0;
	if (!array)
		return (-1);
	while (left <= right)
	{
		print_helper(array, left, right);
		mid = (left + right) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}
