#include "holberton.h"

/**
 * wildcmp - a function that compare two string that contain *
 * "*" character that can be any prosible
 * @s1: pointer point to string 1
 * @s2: pointer point to string 2
 *
 * Return: return 1 if two string was considered the same, otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == '\0' && *s2 != '\0' && *s2 != '*')
		return (0);
	if (*s1 != '\0' && *s2 == '\0')
		return (0);
	if (*s1 != *s2 && *s2 != '*' && *(s2 - 1) != '*')
		return (0);
	if (*s2 == '*')
		s2 = _find_wildcard(s2);
	if (*s2 == '\0')
		return (1);
	if (*(s2 - 1) == '*')
	{
		s1 = _compare_wildcard(s1, s2);
	}
	if (*s1 == '\0')
		return (0);
	s1++;
	s2++;
	return (wildcmp(s1, s2));
}


/**
 * _find_wildcard - a function that find a * wildcard then take the action
 * @str: a pointer that point to string
 *
 * Return: return pointer to string2
 */

char *_find_wildcard(char *str)
{
	if (!*str)
		return (str);
	if (*str != '*')
		return (str);
	return (_find_wildcard(++str));
}

/**
 * _compare_wildcard - a function that compare the next character
 * after wildcard until next match.
 * @str1: pointer point to first string
 * @str2: pointer point to second string
 *
 * Return: return pointer to string1
 */

char *_compare_wildcard(char *str1, char *str2)
{
	if (*str1 == '\0' || *str1 == *str2)
		return (str1);
	++str1;
	return (_compare_wildcard(str1, str2));
}
