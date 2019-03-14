#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - a function that selects the correct function to perform
 * the operation asked by the user
 * @s: a string contains operator
 * get_op_func: an array of function pointer
 *
 * Return: an integer number
 */

int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (i < 5)
	{
		if ((ops[i].op)[0] == s[0] && s[1] == '\0')
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
