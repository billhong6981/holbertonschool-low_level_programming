#include "holberton.h"

/**
 * set_bit - a function that sets the given bit value to 1
 * @n: a pointer to unsigned long integer
 * @index: a given bit position
 * Return: returns 1 on success, -1 if fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int len;

	len = sizeof(*n) * 8;
	if (index > len - 1)
		return (-1);
	(*n) |= (1 << index);
	return (1);
}
