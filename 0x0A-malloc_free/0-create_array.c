#include <stdlib.h>
/**
 * create_array - a function that creates and initializes an array
 * @size: size of the array
 * @c: char to initialize the array with
 * Return: pointer to the array, NULL on fail
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size > 0)
	{
		s = malloc(size);
		if (s == NULL)
			return (NULL);
	}
	else
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
