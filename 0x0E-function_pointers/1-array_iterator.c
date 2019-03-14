#include "function_pointers.h"

/**
 * array_iterator - a function executes a function given as a parameter
 * on each element of an array.
 * @array: a pointer to an array
 * @size: a sizeof type
 * @action: a pointer to function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = -1;

	if (array && action)
	{
		while (++i < size)
			action(array[i]);
	}
}
