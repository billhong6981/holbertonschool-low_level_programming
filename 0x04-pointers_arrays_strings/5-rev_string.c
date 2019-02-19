#include "holberton.h"

/**
 *rev_string - a function that reverses a string
 *@s: a pointer point to char
 *
 *Return: void
 */

void rev_string(char *s)
{
	int i, j;
	char temp;

	j = 0;
	while (s[j] != '\0')
		j++;
	j--;
	for (i = 0; j > i; i++)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j--;
	}
}
