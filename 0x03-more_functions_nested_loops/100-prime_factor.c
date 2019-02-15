#include <stdio.h>

/**
 * main - a program that finds and prints the largest prime factor
 * of the number 612852475143
 *
 * Return: 0 (on success)
 */

int main(void)
{
	long i;
	long num = 612852475143;

	for (i = 2; i < num; i++)
	{
		while (num % i == 0)
			num = num / i;
	}
	printf("%li\n", num);
	return (0);
}
