#include <stdio.h>

/**
 * main - sum even fibonacci numbers under 4 million.
 * Return: void
 */

int main(void)
{
	unsigned long n, i, j, fibo, sums;

	i = sums = 0;
	j = 1;
	for (n = 0; n < 50; n++)
	{
		fibo = i + j;
		i = j;
		j = fibo;
		if (fibo % 2 == 0 && fibo < 4000000)
		{
			sums += fibo;
		}
	}
	printf("%lu\n", sums);
	return (0);
}
