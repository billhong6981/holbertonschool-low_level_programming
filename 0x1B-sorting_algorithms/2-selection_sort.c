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
 * selection_sort - sorts a integer of array using selection sort algorithm
 * @array: a integer of array
 * @size: size of array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;

	if (size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min_idx] > array[j])
				min_idx = j;
		}
		if (i != min_idx)
		{
			swap(&array[i], &array[min_idx]);
			print_array(array, size);
		}
	}
}
