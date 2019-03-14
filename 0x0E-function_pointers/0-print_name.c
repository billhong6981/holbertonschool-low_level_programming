#include <stdlib.h>
#include <stdio.h>
/**
 * print_name - a function that prints a name
 * @name: a pointer to name
 * @f: a pointer to function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		f(name);
}
