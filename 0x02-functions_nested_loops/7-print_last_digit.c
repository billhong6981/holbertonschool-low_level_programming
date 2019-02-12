#include "holberton.h"

/**
 * print_last_digit - prints the last digit of numer.
 * @i: the input number.
 * Return: The last digit.
 */
int print_last_digit(int i)
{
	int r;

	if (i < 0)
		i *= -1;
	r = i % 10;
	_putchar(r + '0');
	return (r);
}
