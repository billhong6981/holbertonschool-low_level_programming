#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory use malloc
 * @b: unsigned int type of variable
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
