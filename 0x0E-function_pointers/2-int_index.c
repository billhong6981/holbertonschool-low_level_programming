#include "function_pointers.h"

/**
 * int_index - a function that searches an integer
 * @array: a pointer to an array
 * @size: a array size
 * @cmp: a pointer to function
 *
 * Return: return index number on success, (-1) if fail
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = -1;
	if (size <= 0 || !(array) || !(cmp))
		return (-1);
	while (++i < size)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
