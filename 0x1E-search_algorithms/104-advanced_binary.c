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
 * binary_recursion - binary search helper function
 * @array: a array to search
 * @left: start index from array
 * @right: end index from array
 * @value: a value to search for
 * Return: return index of search value, otherwise -1
 */
int binary_recursion(int *array, int left, int right, int value)
{
	print_helper(array, left, right);
	if (right > left)
	{
		if (array[(left + right) / 2] == value)
			return ((left + right) / 2);
		if (array[(left + right) / 2] > value)
			return (binary_recursion(array, left, (left + right)
						 / 2 - 1, value));
		else
			return (binary_recursion(array, (left + right)
						 / 2 + 1, right, value));
	}
	return (-1);
}

/**
 * advanced_binary - a search function use binary search algorithm
 * @array: a array to be searched
 * @size: a size of the array
 * @value: a value given to search for
 * Return: return the index of search value if found, otherwise -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	int left, right;

	right = (int)size - 1;
	left = 0;
	if (!array)
		return (-1);
	return (binary_recursion(array, left, right, value));
}
