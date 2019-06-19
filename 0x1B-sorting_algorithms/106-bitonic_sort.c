#include "sort.h"
/**
 * print_subArr - Prints an subarray of integers
 * @array: The array to be printed
 * @low: beginning index
 * @cnt: ending index
 * Return: void
 */
void print_subArr(int *array, size_t low, size_t cnt)
{
	size_t i;

	if (cnt < 2)
		return;
	i = low;
	while (array && i < cnt)
	{
		if (i > low)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}

/**
 * bitonic_compare - a function to compare two array elements
 * @up: a boolean value for sorting up or down
 * @array: an array
 * @i: beginning index of array A
 * @j: endding index of array A
 * Return: void
 */
void bitonic_compare(int up, int *array, size_t i, size_t j)
{
	int temp;

	if (up == 1)
	{
		if (array[i] > array[j])
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
	}
	else
	{
		if (array[i] < array[j])
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
	}
}

/**
 * bitonic_merge - sorting use bitonic sort algorithm
 * @up: a boolean value for sorting up or down
 * @array: an array need to be sorted
 * @size: size of array
 * @low: beginning index
 * @cnt: endding index
 * Return: void
 */
void bitonic_merge(int up, int *array, size_t size, size_t low, size_t cnt)
{
	size_t i, k;

	k = cnt / 2;
	if (cnt < 2)
		return;
	for (i = low; i < low + k; i++)
		bitonic_compare(up, array, i, i + k);
	bitonic_merge(up, array, size, low, k);
	bitonic_merge(up, array, size, low + k, k);
}
/**
 * bitonic_split - splits the array to left and right
 * @up: a boolean value for forting up or down
 * @array: a copy array
 * @size: size of array
 * @low: beggin index
 * @cnt: ending index
 * Return: array
 */
void bitonic_split(int up, int *array, size_t size, size_t low, size_t cnt)
{
	size_t k;

	if (cnt < 2) /* one element array */
		return;          /* recursion exit */
	k = cnt / 2;  /* continuetly split until 1 */
	if (up == 1)
	{
		printf("Merging [%lu/%lu] (UP):\n", cnt, size);
		print_subArr(array, low, low + cnt);
	}
	if (up == 0 && low >= size / 2)
	{
		printf("Merging [%lu/%lu] (DOWN):\n", cnt, size);
		print_subArr(array, cnt, low + cnt);
	}
	bitonic_split(1, array, size, low, k); /* left array */
	bitonic_split(0, array, size, low + k, k);   /*right array*/
	if (up == 1 && low < size / 2)
	{
		printf("Merging [%lu/%lu] (UP):\n", cnt, size);
		print_subArr(array, low, low + cnt);
	}

	if (up == 0 && low < size / 2)
	{
		printf("Merging [%lu/%lu] (DOWN):\n", cnt, size);
		print_subArr(array, cnt, low + cnt);
	}

	bitonic_merge(up, array, size, low, cnt);
	if (up == 1)
	{
		printf("Result [%lu/%lu] (UP):\n", cnt, size);
		print_subArr(array, low, low + cnt);
	}
	if (up == 0)
	{
		printf("Result [%lu/%lu] (DOWN):\n", cnt, size);
		print_subArr(array, cnt, low + cnt);
	}
}
/**
 * bitonic_sort - a function
 * @array: an array
 * @size: size of array
 * Return: void
 */
void bitonic_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	bitonic_split(1, array, size, 0, size);
}
