#include "sort.h"
/**
 * count_digit - a function counts how many digits in decimal the number have
 * @max: the number
 * Return: return number of digit
 */
size_t count_digit(size_t max)
{
	size_t digit = 0;

	while (max)
	{
		max /= RADIX;
		digit++;
	}
	return (digit);
}
/**
 * radix_sort - a function that use radix sort algorithm
 * --- use the index of array are serialization to implemente the work ---
 * @array: an array input
 * @size: size of the array
 * Return: void
 */
void radix_sort(int *array, size_t size)
{
	int *count, *output;
	size_t i, tens = 1, tmp, max, max_digit, placement;

	if (size < 2)
		return;
	max = array[0];
	for (i = 1; i < size; i++)
	{
		if (array[i] > (int)max)
			max = array[i];
	}
	max_digit = count_digit(max);
	count = malloc(sizeof(int) * (RADIX + 1));
	output = malloc(sizeof(int) * size);
	for (placement = 1; placement <= max_digit; placement++)
	{
		for (i = 0; i < RADIX + 1; i++)
			count[i] = 0;
		for (i = 0; i < size; i++)
		{
			tmp = (array[i] / tens) % RADIX;
			count[tmp] += 1;
		}
		for (i = 1; i < RADIX + 1; i++)
			count[i] = count[i] + count[i - 1];
		for (i = (size - 1); ; )
		{
			output[--count[(array[i] / tens) % RADIX]] = array[i];
			if (i == 0)
				break;
			--i;
		}
		for (i = 0; i < size; i++)
			array[i] = output[i];
		print_array(array, size);
		tens *= RADIX;
	}
	free(output);
	free(count);
}
