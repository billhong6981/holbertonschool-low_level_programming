#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * @min: the startin integer value in array
 * @max: the ending integer value in array
 *
 * Return: return a pointer point to array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(*ptr) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (max - min + 1); i++)
		ptr[i] = min + i;
	return (ptr);
}
