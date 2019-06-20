#include "sort.h"

/**
 * swap - swaps two integer numbers
 * @a: integer a
 * @b: integer b
 * Return: void
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * partition - partition for quick sort algorithm
 * @array: array need to sort
 * @size: size
 * @low: low bound index
 * @high: high bound index
 * Return: return pivot index
 */
size_t partition(int *array, size_t size, size_t low, size_t high)
{
	int pivot;
	size_t j, i;

	if (low >= high)
		return (low);
	pivot = array[high];
	i = low;
	j = high;
	while (1)
	{
		while (array[i] < pivot)
			i++;

		while (array[j] > pivot)
			j--;
		if (i <= j)
		{
			swap(&array[j], &array[i]);
			print_array(array, size);
		}
		if (i != size - 1)
			i++;
		if (j != 0)
			j--;
		if (i > j)
			break;
	}
	if (i != high)
	{
		swap(&array[j], &array[high]);
		print_array(array, size);
	}
	return (j);
}
/**
 * quick_sort_4args - function takes 3 args
 * @array: array to be sorted
 * @size: size
 * @low: low bound index
 * @high: high bound index
 * Return: void
 */
void quick_sort_4args(int *array, size_t size, size_t low, size_t high)
{
	size_t p;

	if (low >= high)
		return;
	p = partition(array, size, low, high);
	quick_sort_4args(array, size, low, p);
	quick_sort_4args(array, size, p + 1, high);
}
/**
 * quick_sort_hoare - sorts a integer of array using quick sort algorithm
 * @array: a integer of array
 * @size: size of array
 * Return: void
 */
void quick_sort_hoare(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	quick_sort_4args(array, size, 0, size - 1);
}
