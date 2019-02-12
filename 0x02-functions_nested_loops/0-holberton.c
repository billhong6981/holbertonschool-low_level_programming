#include "holberton.h"

/**
  * main - prints the string "Holberton"
  *
  * Return: 0 on success.
  */

int main(void)
{
	char *str;
	int i;

	str = "Holberton";
	for (i = 0; i < 9; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
