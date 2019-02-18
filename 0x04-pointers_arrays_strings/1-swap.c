#include "holberton.h"

/**
 * swap_int - a function that swaps the values of two integers.
 *@a: two pointer point to int will be swap its value.
 *@b: two pointer point to int will be swap its value.
 *
 *Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
