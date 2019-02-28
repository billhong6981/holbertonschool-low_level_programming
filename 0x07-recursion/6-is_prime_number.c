#include "holberton.h"

/**
 * is_prime_number - a function check the number is prime number or not
 * @n: a number to be checked.
 *
 * Return: return 1 is prime number, 0 is not a prime number.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_base_number(2, n));
}

/**
 * _base_number - a function that add 1 as base number to
 * help to check the input number is prime number or not.
 * @base: the base number usually is 1, passed by caller function.
 * @n: the number to be checked.
 *
 * Return: return 1 is prime number, otherwise 0.
 */

int _base_number(int base, int n)
{
	if (base < n && n % base == 0)
		return (0);
	if (base > n)
		return (1);
	return (_base_number(base + 1, n));
}
