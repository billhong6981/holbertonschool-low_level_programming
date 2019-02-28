#include "holberton.h"

/**
 * _puts_recursion -- a function that prints a string
 * @s: a pointer that point to the string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
