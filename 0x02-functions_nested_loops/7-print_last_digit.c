#include "holberton.h"

/**
 * print_last_digit - prints the last digit of numer.
 * @i: the last place of the number.
 * Return: The last digit.
 */
int print_last_digit(int i)
{
	if (i < 0)
		i *= -1;
	_putchar((i % 10) + '0');
	return (i % 10);
}
