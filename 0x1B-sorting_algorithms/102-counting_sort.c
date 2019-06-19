#include "sort.h"

/**
 * counting_sort - a function that use counting sort algorithm
 * --- use the index of array are serialization to implemente the work ---
 * @array: an array input
 * @size: size of the array
 * Return: void
 */
void counting_sort(int *array, size_t size)
{
	int *count, *output;
	size_t i, max;

	if (size < 2)
		return;
	max = array[0];
	/* get the max and value in array */
	for (i = 1; i < size; i++)
	{
		if (array[i] > (int)max)
			max = array[i];
	}
	output = malloc(sizeof(int) * (size));
	count = malloc(sizeof(int) * (max + 1));
	/* initializes the count[] = {0} */
	for (i = 0; i < max + 1; i++)
		count[i] = 0;
	/* count the occurence of element in array[] */
	for (i = 0; i < size; i++)
		count[array[i]] += 1;
	/* sum of the elements, value changed meants new element occure */
	for (i = 1; i < max + 1; i++)
		count[i] = count[i] + count[i - 1];
	print_array(count, max + 1);
	/* put the count[] index back to the array to make it sorted */
	for (i = (size - 1); ; )
	{
		output[count[array[i]] - 1] = array[i];
		count[array[i]]--;
		if (i == 0)
			break;
		--i;
	}
	for (i = 0; i < size; i++)
		array[i] = output[i];
	free(output);
	free(count);
}
