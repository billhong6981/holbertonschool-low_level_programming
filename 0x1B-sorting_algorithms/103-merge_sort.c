#include "sort.h"
/**
 * print_subArray - Prints an subarray of integers
 *
 * @array: The array to be printed
 * @iBegin: beginning index
 * @iEnd: ending index
 * Return: void
 */
void print_subArray(const int *array, size_t iBegin, size_t iEnd)
{
	size_t i;

	i = iBegin;
	while (array && i < iEnd)
	{
		if (i > iBegin)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}
/**
 * TopDownMerge - merge the left and right array and make it sorted
 * @A: a left and right splited array
 * @iBegin: beginning index of left side array
 * @iMiddle: end index of left side array, beginning index of right
 * @iEnd: end index of right side array
 * @B: a merged array
 * Return: void
 */
void TopDownMerge(int *A, size_t iBegin, size_t iMiddle, size_t iEnd, int *B)
{
	size_t i, j, k;

	i = iBegin;
	j = iMiddle;
	printf("Merging...\n");
	printf("[left]: ");
	print_subArray(A, i, j);
	printf("[right]: ");
	print_subArray(A, j, iEnd);
	/* while there are elements in the left or right */
	for (k = iBegin; k < iEnd; k++)
	{
		if (i < iMiddle && (j >= iEnd || A[i] <= A[j]))
		{
			B[k] = A[i]; /*compare left < right and right exhaust*/
			i++;
		}
		else
		{
			B[k] = A[j]; /*compare right < left and left exhausted*/
			j++;
		}
	}
	printf("[Done]: ");
	print_subArray(B, iBegin, iEnd);
}

/**
 * TopDownSplit - splits the array to left and right
 * @B: a copy array
 * @iBegin: beggin index
 * @iEnd: ending index
 * @array: original array
 * Return: void
 */
void TopDownSplit(int *B, size_t iBegin, size_t iEnd, int *array)
{
	size_t iMiddle;

	if ((iEnd - iBegin) < 2) /* one element array */
		return;          /* recursion exit */
	iMiddle = (iEnd + iBegin) / 2;  /* continuetly split until 1 element */
	/* recursively call to split until one element */
	TopDownSplit(array, iBegin, iMiddle, B); /* left array */
	TopDownSplit(array, iMiddle, iEnd, B);   /* right array */
	/* Merge call */
	TopDownMerge(B, iBegin, iMiddle, iEnd, array);
}
/**
 * copyArray - a function to copy an array
 * @A: a source array A
 * @size: size of array A
 * @B: a copy array B
 * Return: void
 */
void copyArray(int *A, size_t size, int *B)
{
	size_t i;

	for (i = 0; i < size; i++)
		B[i] = A[i];
}

/**
 * merge_sort - sorting use top down merge sort algorithm
 * @array: an array need to be sorted
 * @size: size of array
 * Return: void
 */
void merge_sort(int *array, size_t size)
{
	int *B;

	if (size < 2)
		return;
	B = malloc(sizeof(int) * size);
	copyArray(array, size, B);
	TopDownSplit(B, 0, size, array);
	free(B);
}
