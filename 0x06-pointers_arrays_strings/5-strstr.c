#include "holberton.h"
unsigned int _strcmp(char *needle, char *newstr, unsigned int len_n);
void _strcpy(char *dest, char *src, unsigned int len_n);

/**
 * _strstr - a function that locates a substring
 * @haystack: a pointer point to a string
 * @needle: a pointer point to substring
 *
 * Return: return a pointer to the begin in substring
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int len_n, len_h, i, cmp;
	char newstr[100];

	len_n = len_h = 0;
	while (needle[len_n] != '\0')
		len_n++;
	while (haystack[len_h] != '\0')
		len_h++;
	for (i = 0; i < (len_h - len_n) + 1; i++)
	{
		_strcpy(newstr, haystack, len_n);
		cmp = _strcmp(needle, newstr, len_n);
		if (cmp == 1)
			return (haystack);
		haystack++;
	}
	return (NULL);
}

/**
 * _strcpy - copy size of len_n string
 * @dest: newstring
 * @src: source string
 * @len_n: size
 *
 * Return: void
 */

void _strcpy(char *dest, char *src, unsigned int len_n)
{
	unsigned int i;

	for (i = 0; i < len_n; i++)
		dest[i] = src[i];
	dest[len_n] = '\0';
}

/**
 * _strcmp - compare two strings
 * @needle: a sample string
 * @newstr: a compare string
 * @len_n: the size of needle string
 *
 * Return: the same return 1, diff 0;
 */

unsigned int _strcmp(char *needle, char *newstr, unsigned int len_n)
{
	unsigned int i;

	for (i = 0; i < len_n && needle[i] == newstr[i]; i++)
		;
	if (needle[++i] == '\0')
		return (1);
	else
		return (0);
}
