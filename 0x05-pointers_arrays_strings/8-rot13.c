#include "holberton.h"

/**
 * rot13 - a function that encode by rot13
 * @str: a pointer point to the string
 *
 * Return: return the pointer that point to the string
 */

char *rot13(char *str)
{
	int i, j;
	char cod13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char boolean;

	for (i = 0; str[i] != '\0'; i++)
	{
		boolean = 0;
		for (j = 0; alpha[j] != '\0' && boolean == 0; j++)
		{
			if (str[i] == alpha[j])
			{
				str[i] = cod13[j];
				boolean = 1;
			}
		}
	}
	return (str);
}
