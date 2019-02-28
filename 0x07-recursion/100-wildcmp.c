#include "holberton.h"

/**
 * wildcmp - a function that compare two string that contain *
 * that can be any prosible
 * @s1: pointer point to string 1
 * @s2: pointer point to string 2
 *
 * Return: return 1 if two string was considered the same, otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && *(s2 + 1) == '\0')
		return (1);
	if (*s2 == '*')
	{
		find_wildcard(s2);
		compare_wildcard(s1, s2);
		compare_no_wildcard(s1, s2);
	}
     	if ( *s1 != '\0' && *s2 != '\0')
		wildcmp(s1 + 1, s2 + 1);
	return (1);
}

/**
 * find_wildcard - a function that find a * wildcard then take the action
 * @str: a pointer that point to string
 *
 * Return: 1 if true, otherwise 0
 */

int find_wildcard(char *str)
{
	str++;
	if (*str == '\0')
		return (1);
	else if (*str == '*')
	{
		find_wildcard(str);
		return (1);
	}
	else
		return (0);
}

/**
 * compare_wildcard - a function that compare the next character after wildcard
 * until next match.
 * @str1: pointer point to first string
 * @str2: pointer point to second string
 *
 * Return: 1 if true, 0 false
 */

int compare_wildcard(char *str1, char *str2)
{
	if (*str1 != '\0' && *str1 != *str2)
		compare_wildcard(str1 + 1, str2);
	if (*str1 == '\0')
		return (0);
	else
		return (1);
}

/**
 * compare_no_wilcard - a function compare two string with no wildcard
 * @str1: a pointer point to first string
 * @str2: a pointer point to second string
 *
 * Return: return 1 if true, false 0
 */

int compare_no_wildcard(char *str1, char *str2)
{
	if (*str1 == *str2 && *str1 != '\0' && *str2 != '\0')
		compare_no_wildcard(str1++, str2++);
	if (*str1 == '\0' && *str2 == '\0')
		return (1);
	return (0);
}
