#include "holberton.h"

/**
 * cap_string - a function that capitalizes each word in a string.
 * @s: a pointer point to a string
 *
 * Return: return a pointer that point to the changed string.
 */

char *cap_string(char *s)
{
	int i, j;
	char del[] = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; del[j] != '\0'; j++)
			if (s[i - 1] == del[j] && s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;
	}
	return (s);
}
