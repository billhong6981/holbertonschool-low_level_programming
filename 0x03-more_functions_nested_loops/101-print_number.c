#include "holberton.h"
/**
 * print_number - a function that prints an integer.
 * @n: Input number
 *
 * Return: void
 */

void print_number(int n)
{
	int i, j, m, tens;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	m = n;
	if (n >= 0 && n <= 9)
	{
		_putchar(n + '0');
	}
	else
	{
		while (m != 0)
		{
			m = m / 10;
			++i;
		}
		while (n >= 10)
		{
			j = i;
			tens = 1;
			while (j > 1)
			{
				tens = tens * 10;
				--j;
			}
			_putchar(n / tens + '0');
			n = n % tens;
			if (n < (tens / 10))
			{
				_putchar('0');
				--i;
			}
			--i;
		}
		_putchar(n + '0');
	}
}
