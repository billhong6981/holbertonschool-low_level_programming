#include "sort.h"

/**
 * heapify - a function recursively sorting to get root node largest
 * @array: an array
 * @index: index of node
 * @heap_size: size of heap
 * @size: size of the heap size
 */
void heapify(int *array, size_t index, size_t heap_size, size_t size)
{
	int temp;
	size_t largest, left_index, right_index;

	largest = index;
	left_index = 2 * index + 1;
	right_index = 2 * index + 2;
	if (left_index < heap_size && array[left_index] > array[largest])
		largest = left_index;
	if (right_index < heap_size && array[right_index] > array[largest])
		largest = right_index;
	if (largest != index)
	{
		temp = array[largest];
		array[largest] = array[index];
		array[index] = temp;
		print_array(array, size);
		heapify(array, largest, heap_size, size);
	}
}

/**
 * heap_sort - sorting use heap sort algorithm
 * @array: an array need to be sort
 * @size: size of the array
 * Return: void
 */
void heap_sort(int *array, size_t size)
{
	int temp;
	size_t i;

	for (i = size / 2 - 1; ; i--)
	{
		heapify(array, i, size, size);
		if (i == 0)
			break;
	}
	for (i = size - 1; i > 0; i--)
	{
		temp = array[0];
		array[0] = array[i];
		array[i] = temp;
		print_array(array, size);
		heapify(array, 0, i, size);
	}
}
