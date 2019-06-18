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
 * @low: low bound index
 * @high: high bound index
 * Return: return pivot index
 */
size_t partition(int *array, size_t size, size_t low, size_t high)
{
	int pivot;
	size_t j, i;

	pivot = array[high];
	i = low;
	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			if (j != i)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
			i++;
		}
	}
	if (i != j)
	{
		swap(&array[i], &array[high]);
		print_array(array, size);
	}
	return(i);
}

/**
 * quick_sort_3args - function takes 3 args
 * @array: array to be sorted
 * @low: low bound index
 * @high: high bound index
 * Return: void
 */
void quick_sort_3args(int *array, size_t size, size_t low, size_t high)
{
	size_t p = 0;

	if (low < high)
	{
		p = partition(array, size, low, high);
		if (p != 0)
			quick_sort_3args(array, size, low, p - 1);
		if (p != high)
			quick_sort_3args(array, size, p + 1, high);
	}

}

/**
 * quick_sort - sorts a integer of array using quick sort algorithm
 * @array: a integer of array
 * @size: size of array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	size_t low, high;

	if (size < 2)
		return;
	low = 0;
	high = size - 1;
	quick_sort_3args(array, size, low, high);
}
