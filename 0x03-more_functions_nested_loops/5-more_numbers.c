#include "holberton.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 * Input: void
 *
 * Return: void
 */

void more_numbers(void)
{
	int c, n;

	for (n = 0; n <= 9; n++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
				_putchar(c / 10 + '0');
			_putchar(c % 10 + '0');
		}
		_putchar('\n');
	}
}
