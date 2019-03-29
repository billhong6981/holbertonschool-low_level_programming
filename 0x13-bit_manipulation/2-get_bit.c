#include "holberton.h"
#include <stdio.h>
/**
 * get_bit - a function that returns the value of given bit
 * @n: a unsigned long integer
 * @index: a given bit position
 *
 * Return: return the value of given bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int len;

	len = sizeof(n) * 8;
	if (index > len - 1)
		return (-1);
	return ((n >> index) & 1);
}
