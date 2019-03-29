#include "holberton.h"
#include <stdio.h>
/**
 * print_binary - a function that prints the binary representation of a number
 * @n: a unsigned long integer
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int flag, len;

	len = sizeof(n) * 8;
	flag = 0;
	if (n == 0)
		_putchar('0');
	while (len)
	{
		--len;
		if ((((n >> len) & 1) == 1) && (flag == 0))
			flag = 1;
		if (flag == 1)
			(((n >> len) & 1) == 1) ? _putchar('1') : _putchar('0');
	}
}
