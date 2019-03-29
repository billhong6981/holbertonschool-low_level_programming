#include "holberton.h"

/**
 * flip_bits - function that returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: unsigned long integer
 * @m: unsigned long integer
 *
 * Return: return the number of bits need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int len, count;
	unsigned long int res;

	len = sizeof(n) * 8;
	count = 0;
	res = n ^ m;
	while (len)
	{
		--len;
		if ((res >> len) & 1)
			count++;
	}
	return (count);
}
