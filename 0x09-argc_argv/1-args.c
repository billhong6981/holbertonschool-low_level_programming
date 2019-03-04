#include <stdio.h>

/**
 * main - a function that prints the number passed to it
 * @argc: a argc number passed to it from CLI
 * @argv: a pointer of array that point to string
 *
 * Return: return 0 on success
 */

int main(int argc, char **argv)
{
	argv[0] = 0;
	printf("%d\n", --argc);
	return (0);
}
