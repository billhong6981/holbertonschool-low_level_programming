#include "holberton.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 * @n: the number of character underscore to be printed
 *
 * Return: void
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
