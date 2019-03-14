#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: a pointer to name
 * @f: a pointer to function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	void (*fun_ptr)(char *);

	fun_ptr = f;
	fun_ptr(name);
}
