#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - a main function calculates two integer numbers from standard input
 * @argc: arguments numbers
 * @argv: argument contents
 *
 * Return: 0 on success, others if fail
 */

int main(int argc, char **argv)
{
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (get_op_func(argv[2]) == NULL)
		printf("Error\n"), exit(99);
	if (b == 0 && (*argv[2] == '%' || *argv[2] == '/'))
		printf("Error\n"), exit(100);
	printf("%d\n", (get_op_func(argv[2])(a, b)));
	return (0);
}
