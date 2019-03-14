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
	int i, res;
	int (*fun_ptr)(int);

	i = 0;
	fun_ptr = cmp;
	if (size <= 0)
		return (-1);
	while (i < size)
	{
		res = fun_ptr(array[i]);
		if (res == 0)
			i++;
		else
			return (i);
	}
	return (-1);
}
