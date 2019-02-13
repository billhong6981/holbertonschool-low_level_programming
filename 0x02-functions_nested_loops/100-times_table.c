#include "holberton.h"

/**
 * print_times_table - prints the times table.
 * @i: input the times table (i x i).
 * Return: void
 */

void print_times_table(int i)
{
	int rows, columns, times;

	if (i > 0 && i <= 15)
	{
		for (rows = 0; rows <= i; rows++)
		{
			for (columns = 0; columns <= i; columns++)
			{
				times = (rows * columns);
				if (columns != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (times < 10 && columns != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(times + '0');
				}
				else if (times >= 10 && times < 100)
				{
					_putchar(' ');
					_putchar((times / 10) + '0');
					_putchar((times % 10) + '0');
				}
				else if (times >= 100 && columns != 0)
				{
					_putchar((times / 100) + '0');
					_putchar((times / 10) % 10 + '0');
					_putchar((times % 10) + '0');
				}
				else
				{
					_putchar('0');
				}
			}
			_putchar('\n');
		}
	}
}
