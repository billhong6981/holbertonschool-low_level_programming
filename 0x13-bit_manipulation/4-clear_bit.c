#include "holberton.h"
/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 * @n: a pointer to a unsigned long integer
 * @index: a given bit position
 * Return: return 1 on success, -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int len;

	len = sizeof(*n) * 8;
	if (index > len - 1)
		return (-1);
	(*n) &= (~(1 << index));
	return (1);
}
