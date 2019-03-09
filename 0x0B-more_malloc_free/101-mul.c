#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - a function that multiplies two positive numbers
 * @argc: numbers of argument
 * @argv: arrays of arguments
 *
 * Return: return 0 on sucess, 1 if fail
 */

int main(int argc, char *argv[])
{
	int i, j, m, len, len1, len2, tmp, carry, flag1, flag2;
	char *er, *str1, *str2, *temp1, *temp2, *mul;

	er = "Error";
	carry = tmp = m = 0;
	if (argc != 3)
	{
		for (i = 0; er[i] != '\0'; i++)
			_putchar(er[i]);
		_putchar('\n');
		exit(98);
	}
	flag1 = check_0_9(argv[1]);
	flag2 = check_0_9(argv[2]);
	if (flag1 == 0 || flag2 == 0)
	{
		for (i = 0; er[i] != '\0'; i++)
			_putchar(er[i]);
		_putchar('\n');
		exit(98);
	}
	len1 = string_len(argv[1]);
	len2 = string_len(argv[2]);
	len = len1 + len2;
	if (len1 >= len2)
	{
		str1 = malloc(sizeof(char) * len1 + 1);
		str2 = malloc(sizeof(char) * len2 + 1);
		temp1 = malloc(sizeof(char) * len1 + 2);
		temp2 = malloc(sizeof(char) * len1 + 2);
		mul = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	else
	{
		str1 = malloc(sizeof(char) * len2 + 1);
		str2 = malloc(sizeof(char) * len1 + 1);
		temp1 = malloc(sizeof(char) * len2 + 2);
		temp2 = malloc(sizeof(char) * len2 + 2);
		mul = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	if (str1 == NULL || str2 == NULL || mul == NULL || temp1 == NULL || temp2 == NULL)
	{
		free(str1);
		free(str2);
		free(temp1);
		free(temp2);
		free(mul);
		for (i = 0; er[i] != '\0'; i++)
			_putchar(er[i]);
		_putchar('\n');

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
		tmp = len1;
		len1 = len2;
		len2 = tmp;
	}
	for (i = 0; i < (len1 + 2); i++)
		temp1[i] = '\0';
	for (i = 0; i < (len1 + 2); i++)
		temp2[i] = '\0';
	for (i = 0; i < len + 1; i++)
		mul[i] = '\0';
	/** reverse the string **/
	_strrev(str1);
	_strrev(str2);
	for (j = 0; j < len2; j++)
	{
		carry = 0;
		for (i = 0; i < len1; i++)
		{
			if (j == 0)
			{
				m = (str1[i] - '0') * (str2[j] - '0');
				tmp = m % 10 + carry;
				temp2[i] = tmp % 10 + '0';
				carry = tmp / 10 + m / 10;
			}
			else
			{
				m = (str1[i] - '0') * (str2[j] - '0');
				tmp = m % 10 + carry;
				temp1[i] = tmp % 10 + '0';
				carry = tmp / 10 + m / 10;
			}
		}
		if (carry != 0 && j == 0)
		{
			temp2[i] = carry + '0';
			temp2[++i] = '\0';
		}
		if (carry == 0 && j == 0)
			temp2[i] = '\0';
		if (carry != 0 && j != 0)
		{
			temp1[i] = carry + '0';
			temp1[++i] = '\0';
		}
		if (carry == 0 && j != 0)
			temp1[i] = '\0';
		mul[j] = temp2[0];

		/** temp2[] shift one digit to left **/
		temp2 = shift_left(temp2);

		/** temp2[] = temp1[] + temp2[] **/
		temp2 = infinite_add(temp1, temp2);
	}
	/** append temp[] to mul[] **/
	for (i = 0; temp2[i] != '\0'; j++, i++)
		mul[j] = temp2[i];
	mul[j] = '\0';
	/** revert mul[]   **/
	_strrev(mul);
	for (i = 0; mul[i] != '\0'; i++)
		_putchar(mul[i]);
	_putchar('\n');
	free(str1);
	free(str2);
	free(temp1);
	free(temp2);
	free(mul);
	return (0);
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
	int i, len;

	len = string_len(str);
	for (i = 1; i < len; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * shift_left - a function that shifts the string one digit left.
 * @dest: a pointer point to string
 *
 * Return: return a pointer that point to char
 */

char *shift_left(char *dest)
{
	int i;

	for (i = 1; dest[i] != '\0'; i++)
		dest[i - 1] = dest[i];
	dest[i - 1] = dest[i];
	return (dest);
}

/**
 * infinite_add - a function that add two string together
 * @str1: string one
 * @str2: string two
 *
 * Return: return a pointer to string2
 */

char *infinite_add(char *str1, char *str2)
{
	int i, m, carry, len;

	len = sizeof(str1);
	i = m = carry = 0;
	m = str1[0] - '0' + str2[0] - '0';
	if (m >= 10)
		carry = 1;
	str2[0] = m % 10 + '0';
	for (i = 1; i < len; i++)
	{
		if (str1[i] != '\0' && str2[i] != '\0')
		{
			m = str1[i] - '0' + str2[i] - '0' + carry;
			if (m >= 10)
				carry = 1;
			else
				carry = 0;
			str2[i] = m % 10 + '0';
		}
		if (str1[i] != '\0' && str2[i] == '\0')
			str2[i] = str1[i];
	}
	return (str2);
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
