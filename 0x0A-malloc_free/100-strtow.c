#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * truncate_extra_spaces - a function that deletes extra spaces
 * @str: a pointer point to string
 * @str1: a pointer point to new string after truncation of extra spaces
 *
 * Return: return pointer to string, NULL if fail
 */

char *truncate_extra_spaces(char *str1, char *str)
{
	int i, j;

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
	if (j == 0)
		return (NULL);
	str1[j] = '\0';
	return (str1);
}

/**
 * mem_alloc - splits string into words and allocate the memory for it
 * @str1: a pointer point to string
 *
 * Return: return pointer of the two dimemsion of arrays, NULL if fail
 */

char **mem_alloc(char *str1)
{
	int i, j, n, words, ch_c, w_c;
	char **p;

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
				if (p[w_c] == NULL)
				{
					for (j = 0; j <= w_c; j++)
						free(p[j]);
					return (NULL);
				}
				ch_c = i;
				i++;
				break;
			}
			i++;
		}
		p[w_c] = malloc(i - ch_c);
	}
	p[words] = NULL;
	for (i = 0, words = 1; str1[i] != '\0'; i++)
	{
		if (str1[i] == ' ')
			++words;
	}
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
 * strtow - a function that splits a string into words
 * @str: pointer point to string
 *
 * Return: double pointer to words, return NULL if fail
 */

char **strtow(char *str)
{
	int len;
	char **ptr;
	char *str1;

	/** get the length of the original string **/
	if (str == NULL || *str == '\0')
		return (NULL);
	len = string_len(str);

	/** delete the extra spaces and make a new string **/
	str1 = (char *)malloc(len + 1);
	if (str1 == NULL)
		return (NULL);
	str1 = truncate_extra_spaces(str1, str);
	if (str1 == NULL)
	{
		free (str1);
		return (NULL);
	}

	/** splits a string into words and allocate memories for them **/
	ptr = mem_alloc(str1);
	if (ptr == NULL)
		return (NULL);
	free (str1);
	return (ptr);
}

/**
 * string_len - a function counts the string length
 * @str: a pointer point to string
 *
 * Return: return the length of the string. or 0 on fail
 */

int string_len(char *str)
{
	int i, len;

	if (!*str)
		return (0);
	for (i = 0, len = 0; str[i] != '\0'; i++, len++)
		;
	return (len);
}
