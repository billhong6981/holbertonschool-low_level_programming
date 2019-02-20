#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * _keygen - the program generate a 4 digits of random number as password
 *
 * Return: return a random numbers of string.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n = n % 10000;
	return (n);
}
