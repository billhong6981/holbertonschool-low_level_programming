#include "holberton.h"

/**
  * Main -- Program Entry Point
  * Print "Holberton" string
  *
  * Return 0 (on success)
  */

int main (void)
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
