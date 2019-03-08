#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - a function that multiplies two positive numbers
 * @
 * @
 *
 *
 * Return:
 */

int main(int argc, char **argv)
{
	int len1, len2, flag1, flag2;
	char *str1, *str2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	flag1 = check_0_9(argv[1]);
	flag2 = check_0_9(argv[2]);
	if (flag1 == 0 || flag2 == 0)
	{
		printf("Error\n");
		exit(98);
	}
	len1 = string_len(argv[1]);
	len2 = string_len(argv[2]);
	if (len1 >= len2)
	{
		str1 = malloc(sizeof(char) * len1 + 1);
		str2 = malloc(sizeof(char) * len2 + 1);
		mul = malloc(sizeof(char) * (len1 +len2 + 1));
	}
	else
	{
		str1 = malloc(sizeof(char) * len2 + 1);
		str2 = malloc(sizeof(char) * len1 + 1);
		mul = malloc(sizeof(char) * (len1 +len2 + 1));
	}
	if (str1 == NULL || str2 == NULL || mul == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	/** str1 always longer than str2 **/
	if (len1 >= len2)
	{
		str1 = _strcpy(str1, argv[1]);
		str2 = _strcpy(str2, argv[2]);
	}
	else
	{
		str1 = _strcpy(str1, argv[2]);
		str2 = _strcpy(str2, argv[1]);
	}
	/** reverse the string **/
	_strrev(str1);
	_strrev(str2);

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
	for (i = 0, len = 0; str[i] != '\0'; i++, len++);
	return (len);
}

/**
 * _strrev - a function to reverses string
 * @str: a pointer point to string
 *
 * Return: void
 */

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

/**
 * check_0_9 - a function that checks string only contain digits
 * @str: a pointer point to string
 *
 * Return: 1 on success, or 0 if fail
 */
int check_0_9(char *str)
{
	int i, j, len;

	len = string_len(str);
	for (i = 1; i < len; i++)
	{
		if (str[i] < '0' || argv[i][j] > '9')
			return (0);
	}
	return (1);
}

/**
 * *_strcpy - a function that copies the string pointed to by src.
 * @dest: a pointer point to destination copied char
 * @src: a pointer point to source copied char
 *
 * Return: return a pointer that point to char
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
