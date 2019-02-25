#include "holberton.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
void _strrev(char *str);

/**
 * infinite_add - a function that adds two numbers
 * @n1: a pointer to first input string
 * @n2: a pointer to second input string
 * @r: pointer to buffer where result is stored
 * @size_r: size for the buffer
 *
 * Return: return pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	char *str1, *str2;
	int i, m, carry, len;

	str1 = (char *)malloc(strlen(n1) + 1);
	str2 = (char *)malloc(strlen(n2) + 1);
	assert(str1 != NULL);
	assert(str2 != NULL);
	i = m = carry = 0;
	if (strlen(n1) > strlen(n2))
	{
		strcpy(str1, n1);
		strcpy(str2, n2);
	}
	else
	{
		strcpy(str1, n2);
		strcpy(str2, n1);
	}
	len = strlen(str1);
	if (len + 1 > size_r)
	{
		r = '\0';
		return (r);
	}
	else
	{
		_strrev(str1);
		_strrev(str2);
		m = str1[0] - '0' + str2[0] - '0';
		if (m >= 10)
			carry = 1;
		r[0] = m % 10 + '0';
		for (i = 1; str2[i] != '\0'; i++)
		{
			m = str1[i] - '0' + str2[i] - '0' + carry;
			if (m >= 10)
				carry = 1;
			else
				carry = 0;
			r[i] = m % 10 + '0';
		}
		for ( ; str1[i] != '\0'; i++)
		{
			m = str1[i] - '0' + carry;
			if (m >= 10)
				carry = 1;
			else
				carry = 0;
			r[i] = m % 10 + '0';
		}
		if (carry == 1 && (len + 1 >= size_r))
		{
			r = '\0';
			return (r);
		}
		else if (carry == 1 && (len + 1 < size_r))
		{
			r[i] = carry + '0';
			r[++i] = '\0';
		}
		else
		{
			r[i] = '\0';
		}
		_strrev(r);
		free (str1);
		free (str2);
		return (r);
	}
}

void _strrev(char *str)
{
	int i, j;
	char temp;

	i = 0;
	while (str[i] != '\0')
		i++;
	i--;
	for (j = 0; j < i; j++, i--)
	{
		temp = str[j];
		str[j] = str[i];
		str[i] = temp;
	}
}
