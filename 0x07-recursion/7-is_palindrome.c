#include "holberton.h"
/**
 * is_palindrome - a function that check the input string
 * is read from forward and backward are the same or not,
 * it call palindrome.
 * @s: a pointer that point to string
 *
 * Return: return 1 is palindrome, otherwise 0
 */

int is_palindrome(char *s)
{
	int len;
	char *str;

	str = s;
	if (!*s)
		return (1);
	len = _strlen_recursion(str);
	return (compare_str(s, 0, len - 1));
}

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: the pointer that point to string
 *
 * Return: return the length of the string
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}


/**
 * compare_str - compare a string whether palindrome or not
 * @str: a pointer that point to string
 * @len: the length of the string
 * @i: the forward index of string
 *
 * Return: return 1 if forward and backward are the same, otherwise 0
 */

int compare_str(char *str, int i, int len)
{
	if (i >= len)
		return (1);
	if (str[i] == str[len])
		return (compare_str(str, i + 1, len - 1));
	return (0);
}
