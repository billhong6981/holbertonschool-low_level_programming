#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that multiplies two number
 * @argc: a argument counter
 * @argv: a pointer point to argument string
 *
 * Return: return 0 on success, -1 if failure
 */

int main(int argc, char *argv[])
{
	int res1, res2;

	res1 = res2 = 0;
	if (argc == 3)
	{
		res1 = atoi(argv[1]);
		res2 = atoi(argv[2]);
		printf("%d\n", res1 * res2);
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}