#include <stdio.h>

/**
 * main - a function that prints all arguments it reveive
 * @argc: a arguments counter
 * @argv: an array of pointer point to each argument string
 *
 * Return: return 0 on success
 */

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
