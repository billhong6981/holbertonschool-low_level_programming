#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array
 * @nmemb: the number of elements inside the array
 * @size: the bytes of each element in array
 *
 * Return: a pointer point to the array, NULL if fail
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb ; i++)
		p[i] = 0;
	return ((char *)p);
}
