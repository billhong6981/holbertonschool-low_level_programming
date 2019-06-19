#include "sort.h"
/**
 * print_subArr - Prints an subarray of integers
 * @up: a boolean value for sorting up and down
 * @array: The array to be printed
 * @size: size of original array
 * @iBegin: beginning index
 * @iEnd: ending index
 * Return: void
 */
void print_subArr(int up, int *array, size_t size, size_t iBegin, size_t iEnd)
{
	size_t i;

	if ((iEnd - iBegin) < 2)
		return;
	if (up == 1)
		printf("Merging [%lu/%lu] (UP):\n", (iEnd - iBegin), size);
	else
		printf("Merging [%lu/%lu] (DOWN):\n", (iEnd - iBegin), size);
	i = iBegin;
	while (array && i < iEnd)
	{
		if (i > iBegin)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}
/**
 * swap - a function swaps two integer value
 * @a: integer a;
 * @b: integer b;
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
 * bitonic_compare - a function to compare two array elements
 * @up: a boolean value for sorting up or down
 * @array: an array
 * @iBegin: beginning index of array A
 * @iEnd: endding index of array A
 * Return: void
 */
void bitonic_compare(int up, int *array, size_t iBegin, size_t iEnd)
{
	size_t i, iMiddle;

	if ((iEnd - iBegin) < 2)
		return;
	iMiddle = (iEnd + iBegin) / 2;
	for (i = iBegin; i < iMiddle; i++)
	{
		if (up == 1)
		{
			if (array[i] > array[i + iMiddle])
				swap(&array[i], &array[i + iMiddle]);
		}
		else
		{
			if (array[i] < array[i + iMiddle])
				swap(&array[i], &array[i + iMiddle]);
		}
	}
}

/**
 * bitonic_merge - sorting use bitonic sort algorithm
 * @up: a boolean value for sorting up or down
 * @array: an array need to be sorted
 * @iBegin: beginning index
 * @iEnd: endding index
 * Return: void
 */
void bitonic_merge(int up, int *array, size_t iBegin, size_t iEnd)
{
	size_t iMiddle;

	iMiddle = (iEnd + iBegin) / 2;
	if ((iEnd - iBegin) < 2)
		return;
	else
	{
		bitonic_compare(up, array, iBegin, iEnd);
		bitonic_merge(up, array, iBegin, iMiddle);
		bitonic_merge(up, array, iMiddle, iEnd);
	}
}
/**
 * bitonic_split - splits the array to left and right
 * @up: a boolean value for forting up or down
 * @array: a copy array
 * @iBegin: beggin index
 * @iEnd: ending index
 * Return: array
 */
void bitonic_split(int up, int *array, size_t size, size_t iBegin, size_t iEnd)
{
	size_t iMiddle;

	if ((iEnd - iBegin) < 2) /* one element array */
		return;          /* recursion exit */
	else
	{
		iMiddle = (iBegin + iEnd) / 2;  /* continuetly split until 1 */
		/* recursively call to split until one element */
		print_subArr(up, array, size, iBegin, iEnd);
		bitonic_split(1, array, size, iBegin, iMiddle); /* left array */

		bitonic_split(0, array, size, iMiddle, iEnd);   /*right array*/

		/* Merge call */
		bitonic_merge(up, array, iBegin, iEnd);
	}
}
void bitonic_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	bitonic_split(1, array, size, 0, size);
}
