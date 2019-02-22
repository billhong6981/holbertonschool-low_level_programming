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
	int i, j, add;

	j = add = 0;
	for (i = 0; i < size - 1 && b[i] != 0; i++)
	{
		add += j;
		printf("%.8x: ", add);
		for (j = 0; j < 10; )
		{
			printf("%x%x ", b[i * 10 + j], b[i * 10 + j + 1]);
			j += 2;
		}
		for (j = 0; j < 10; j++)
		{
			printf("%c", *(b + i * 10 + j));
		}
		printf("\n");
	}
}
