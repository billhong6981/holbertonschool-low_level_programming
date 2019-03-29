#include "holberton.h"
/**
 * binary_to_uint - converts a binary to uint
 * @b:a string
 *
 * Return: returns a uint decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	unsigned int len, i;

	if (b == NULL)
		return (0);
	len = _strlen(b);
	for (i = 0; len; i++)
	{
		--len;
		if ((b[len] < '0') || (b[len] > '1'))
			return (0);
		if (b[len] == '1')
			res += (1 << i);
	}
	return (res);
}

/**
 * _strlen - a function returns the lenth of the string
 * @s: a string
 * Return: returns the length of string
 */
unsigned int _strlen(const char *s)
{
	unsigned int len = 0;

	if (s == NULL)
		return (0);
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
