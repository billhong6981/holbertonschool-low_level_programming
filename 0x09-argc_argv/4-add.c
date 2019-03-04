#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - a function that adds positive numbers
 * @argc: a argument counter
 * @argv: a pointer point to argument string
 *
 * Return: return 0 on success, 1 if failure
 */

int main(int argc, char **argv)
{
	int i, sum;
	unsigned int j, flag;

	flag = 0;
	if (argc == 1)
	{
		printf("%s\n", "0");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (flag == 1)
			break;
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				flag = 1;
				break;
			}
		}
	}
	if (flag == 1)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
