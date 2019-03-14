#include "function_pointers.h"

/**
 * array_iterator - a function executes a function given as a parameter on each
element of an array.
* @array: a pointer to an array
* @size: a sizeof type
* @action: a pointer to function
*
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	void (*fun_prt)(int);

	fun_prt = action;
	for (i = 0; i < size; i++)
		fun_prt(array[i]);
}
