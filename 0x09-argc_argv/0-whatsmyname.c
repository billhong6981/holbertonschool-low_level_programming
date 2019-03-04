#include <stdio.h>

/**
 * main - a function that prints it name
 * @argc: a arguments count that passed to the functionm,
 * in this function, it was designed to unused variable.
 * @argv: a pointer point to argument string
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
