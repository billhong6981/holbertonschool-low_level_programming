#include "holberton.h"

/**
 * print_diagonal -  a function that draws a diagonal line on the terminal.
 * @n: the number of the lines to be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
