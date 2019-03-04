#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - a function that prints a mininum number of coins to make change
 * @argc: a arguments counter
 * @argv: a pointer point to argument string
 *
 * Return: return 0 on success, 1 on error
 */

int main(int argc, char **argv)
{
	int change, n25, n10, n5, n2;

	n25 = n10 = n5 = n2 = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	if (change <= 0)
	{
		printf("0\n");
		return (0);
	}
	if (change >= 25)
	{
		n25 = change / 25;
		change = change % 25;
	}
	if (change >= 10)
	{
		n10 = change / 10;
		change = change % 10;
	}
	if (change >= 5)
	{
		n5 = change / 5;
		change = change % 5;
	}
	if (change >= 2)
	{
		n2 = change / 2;
		change = change % 2;
	}
	printf("%d\n", n25 + n10 + n5 + n2 + change);
	return (0);
}
