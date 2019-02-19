#include "holberton.h"

/**
 *print_rev - a function that prints a string in reverse.
 *@s: a pointer point to a string
 *
 *Return: void
 */

void print_rev(char *s)
{
	int j;

	j = 0;
	while (s[j] != '\0')
		j++;
	while (j--)
		_putchar(s[j]);
	_putchar('\n');
}
