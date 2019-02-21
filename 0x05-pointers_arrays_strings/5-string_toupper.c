#include "holberton.h"

/**
 * string_toupper - a function that changes all lowercase to uppercase.
 * @str: a pointer point to a string
 *
 * Return: return a pointer point to the string
 */

char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
