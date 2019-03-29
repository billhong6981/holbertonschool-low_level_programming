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
	unsigned int len, count1, count2;
	unsigned long int temp1, temp2;

	len = sizeof(n) * 8;
	temp1 = n & m; /* how many 1s are the same */
	temp2 = n | m; /* how many 0s are the same */
	count1 = count2 = 0;
	while (len)
	{
		--len;
		if (((temp1 >> len) & 1) == 1)
			count1++;
	}
	len = sizeof(m) * 8;
	while (len)
	{
		--len;
		if (((temp2 >> len) & 1) == 0)
			count2++;
	}
	len = sizeof(n) * 8;
	return (len - count1 - count2);
}
