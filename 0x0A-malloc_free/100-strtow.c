#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * strtow - a function that splits a string into words
 * @str: pointer point to string
 *
 * Return: double pointer to words, return NULL if fail
 */

char **strtow(char *str)
{
	int len, w_c, ch_c, words, n, i, j;
	char **p, *str1;

	len = string_len(str);
	str1 = (char *)malloc(len + 1);
	if (!*str)
		return (NULL);
	/** delete the space in string  **/
	for (i = 0, j = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && j == 0)
		{
			str1[j] = str[i];
			j++;
			continue;
		}
		if (str[i] == ' ')
			continue;
		else if (str[i] != ' ' && str[i - 1] == ' ')
		{
			str1[j] = ' ';
			str1[++j] = str[i];
			j++;
		}
		else
		{
			str1[j] = str[i];
			j++;
		}
	}
	str1[j] = '\0';
        /** splits string into words and allocate the memory for it **/
	for (i = 0, words = 1; str1[i] != '\0'; i++)
	{
		if (str1[i] == ' ')
			++words;
	}
	p = malloc((words + 1) * sizeof(void *));
	if (p == NULL)
		return (NULL);
	i = ch_c = 0;
	for (w_c = 0; w_c < words; w_c++)
	{
		while (str1[i] != '\0')
		{
			if (str1[i] == ' ')
			{
				ch_c = i - ch_c;
				p[w_c] = malloc(ch_c + 1);
				ch_c = i;
				i++;
				break;
			}
			i++;
		}
		p[w_c] = malloc(i - ch_c);
	}
	p[words] = NULL;

	/** stored words in array **/
	j = 0;
	for (i = 0; i < words && str1[j] != '\0'; i++)
	{
		for (n = 0; str1[j] != '\0' && str1[j] != ' '; n++, j++)
		{
			p[i][n] = str1[j];
		}
		j++;
		p[i][n] = '\0';
	}
	return (p);
}

/**
 * string_len - a function counts the string length
 * @str: a pointer point to string
 *
 * Return: return the length of the string. or 0 on fail
 */

int string_len(char *str)
{
	int len;

	if (!*str)
		return (0);
	len = 1;
	while(*str)
	{
		len++;
	}
	return (len);
}
