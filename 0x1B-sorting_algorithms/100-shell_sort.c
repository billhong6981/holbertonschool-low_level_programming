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
	size_t i, j, gap = 1, flag;

	if (!array || size < 2)
		return;
	while ((gap * 3) + 1 < size)
		gap = gap * 3 + 1;
	for (; gap > 0; gap = (gap - 1) / 3)
	{
		flag = 0;
		for (i = gap; i < size; i++)
		{
			for (j = i - gap; array[j] > array[j + gap]; )
			{
				swap(&array[j], &array[j + gap]);
				flag = 1;
				if (j >= gap)
					j = j - gap;
				else
					break;
			}
		}
		if (flag == 1)
			print_array(array, size);
	}
}
