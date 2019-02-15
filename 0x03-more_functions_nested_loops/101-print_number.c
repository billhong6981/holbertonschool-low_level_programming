#include "holberton.h"
/**
 * print_number - a function that prints an integer.
 * @n: Input number
 *
 * Return: void
 */

void print_number(int n)
{
	int i, j, temp, tens;

	i = 1;
	tens = 1;
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	temp = n;
	while (temp >= 10)
	{
		temp = temp / 10;
		i++;
	}
	for (j = 1; j < i; j++)
		tens = tens * 10;
	while (tens > 1)
	{
		_putchar((n / tens) % 10 + '0');
		tens /= 10;
	}
	_putchar(n % 10 + '0');
}
