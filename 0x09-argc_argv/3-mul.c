#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - a function that multiplies two number
 * @argc: a argument counter
 * @argv: a pointer point to argument string
 *
 * Return: return 0 on success, -1 if failure
 */

int main(int argc, char **argv)
{
	if (argc == 1 || argc > 3)
	{
		printf("%s\n", "Error");
		return (-1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
