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
 * shell_sort - sorts a integer of array using shell sort algorithm
 * @array: a integer of array
 * @size: size of array
 * Return: void
 */
void shell_sort(int *array, size_t size)
{
	size_t k = 0, i, j, gap;
	size_t gaps[] = {364, 121, 40, 13, 4, 1, 0};

	if (size < 2)
		return;
	while (1)
	{
		if (gaps[k] < size)
			break;
		k++;
	}
	for (gap = gaps[k]; gap > 0; gap = gaps[k++])
	{
		for (i = gap; i < size; i++)
		{
			for (j = i - gap; array[j] > array[j + gap]; )
			{
				swap(&array[j], &array[j + gap]);
				if (j >= gap)
					j = j - gap;
				else
					break;
			}
		}
		print_array(array, size);
	}
}
