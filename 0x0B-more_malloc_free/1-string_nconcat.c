#include <stdlib.h>
#include "holberton.h"

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: a pointer point to string 1
 * @s2: a pointer point to string 2
 * @n: a size of string 2 to be added into new string
 *
 * Return: return a pointer point to new buffer, NULL if fail
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, size, i;
	int j;
	char *ptr;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	len1 = string_len(s1);
	len2 = string_len(s2);
	size = (n >= len2) ? (len1 + len2) : (len1 + n);
	ptr = malloc(sizeof(char) * size + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; i < size; i++, j++)
		ptr[i] = s2[j];
	ptr[i] = '\0';
	return (ptr);
}

/**
 * string_len - a function counts the length of string
 * @str: a pointer point to string
 *
 * Return: return the length of the string. or 0 on fail
 */

int string_len(char *str)
{
	int i;
	unsigned int len;

	if (!*str)
		return (0);
	for (i = 0, len = 0; str[i] != '\0'; i++, len++)
		;
	return (len);
}
