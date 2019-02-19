#include "holberton.h"

/**
 * puts2 - a function that prints one character out of two in one string.
 * @str: a pointer point to the string
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
