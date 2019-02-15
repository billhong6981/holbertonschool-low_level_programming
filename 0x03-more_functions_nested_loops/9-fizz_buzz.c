#include <stdio.h>
#include "holberton.h"

/**
 * main - print number from 1~100, but instead:
 * the number is multiples of 3, print Fizz;
 * the number is multiples of 5, print Buzz;
 * the number is both of multiples of 3 and 5, print FizzBuzz
 *
 * Return: 0 (on success)
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", n);
		}
		if (n != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
