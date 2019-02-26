#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of two diagonals of square
 * matrix of integers
 * @a: a pointer point to integer array
 * @size: an array's size
 *
 * Reture: void
 */

void print_diagsums(int *a, int size)
{
	int i, sum_f, sum_b;

	sum_b = sum_f = 0;
	for (i = 0; i < (size * size); i += size + 1)
		sum_b += a[i];
	for (i = size - 1; i < (size * size - 1); i += size - 1)
		sum_f += a[i];
	printf("%d, %d\n", sum_b, sum_f);
}
