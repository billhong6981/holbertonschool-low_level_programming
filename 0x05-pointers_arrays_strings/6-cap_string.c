#include "holberton.h"

/**
 * cap_string - a function that capitalizes each word in a string.
 * @str: a pointer point to a string
 *
 * Return: return a pointer that point to the changed string.
 */

char *cap_string(char *str)
{
	int i, j;
	char delimitor[] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; delimitor[j] != '\0'; j++)
		{
			if (str[i] == delimitor[j])
			{
				i++;
				if (str[i] > 'a' && str[i] < 'z')
					str[i] -= 32;
				else
					j = 0;
			}
		}
	}
	return (str);
}
