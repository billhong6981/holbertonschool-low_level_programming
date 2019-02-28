#include "holberton.h"

/**
 * _print_rev_recursion -- a function that prints the string in reverse.
 * @s: a pointer that point to the string
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
