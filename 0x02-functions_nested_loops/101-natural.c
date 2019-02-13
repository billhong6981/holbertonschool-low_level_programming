#include <stdio.h>
/**
 * main - get the total sum of all the multiples of 3 or 5 below 1024.
 *
 * Return: void.
 */

int main(void)
{
	int n, sum;

	for (n = 0; n < 1024; n++)
		if (n % 3 == 0 || n % 5 == 0)
			sum += n;
	printf("%d\n", sum);
	return (0);
}
