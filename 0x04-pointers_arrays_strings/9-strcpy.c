#include "holberton.h"

/**
 * *_strcpy - a function that copies the string pointed to by src.
 * @dest: a pointer point to destination copied char
 * @src: a pointer point to source copied char
 *
 * Return: return a pointer that point to char
 */

char *_strcpy(char *dest, char *src)
{
	int i, n;

	for (i = 0; src[i] != '\0'; )
		i++;
	for (n = 0; n < i; n++)
		dest[n] = src[n];
	dest[i] = '\0';
	return (dest);
}
