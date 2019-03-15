#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function prints opcode
 * @argc: arguments from comment line
 * @argv: each arguments contents
 *
 * Return: 0 on success, others if fail.
 */

int main(int argc, char **argv)
{
	int (*pf)(int, char **);
	int a, i;

	pf = &main;
	if (pf == NULL)
		exit(1);
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < a; i++)
		printf("%02x ", ((unsigned char *)pf)[i]);
	printf("\n");
	return (0);
}
