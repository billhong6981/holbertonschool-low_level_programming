#include "holberton.h"
#include <stdio.h>

/**
 * print_buffer - a function that print buffer address
 * @b: a pointer point to buffer
 * @size: the size of the buffer
 *
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int n, i, j, add;

	n = size - 1;
	if (size % 10 == 0)
		size = size / 10;
	else
		size = size / 10 + 1;
	j = add = 0;
	for (i = 0; i < size && *b != 0 && (i * 10 + j) != n - 1; i++)
	{
		add += j;
		printf("%.8x: ", add);
		for (j = 0; j < 10; )
		{
			if ((i * 10 + j + 1) != n)
			{
				printf("%.2x%.2x ", b[i * 10 + j], b[i * 10 + j + 1]);
				j += 2;
			}
		}
		for (j = 0; j < 10; j++)
		{
			if (b[i * 10 + j] == '\0' || b[i * 10 + j] == '\1' || b[i * 10 + j] == '\2' || b[i * 10 + j] == '\3' || b[i * 10 + j] == '\4' || b[i * 10 + j] == '\5' || b[i * 10 + j] == '\6' || b[i * 10 + j] == '\7' || b[i * 10 + j] == '\x2')
				printf(".");
			else
				printf("%c", b[i * 10 + j]);
		}
		printf("\n");
	}
}
