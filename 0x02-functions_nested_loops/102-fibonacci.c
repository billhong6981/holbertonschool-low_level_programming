#include <stdio.h>
/**
 * main - print the first 50 fibonacci numbers.
 * Return: void.
 */
int main(void)
{
	unsigned long n, i, j, fibo;

	i = 0;
	j = 1;
	for (n = 0; n < 50; n++)
	{
		fibo = i + j;
		i = j;
		j = fibo;
		printf("%lu", fibo);
		if (n == 49)
			putchar('\n');
		else
		{
			printf(", ");
		}
	}
	return (0);
}
