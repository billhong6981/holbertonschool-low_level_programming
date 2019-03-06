#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: a pointer point to first string
 * @s2: a pointer point to second string
 *
 * Return: pointer to a new buffer
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int s1_n, s2_n, sizeBuffer, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1_n = 0; s1[s1_n]; s1_n++)
		;
	for (s2_n = 0; s2[s2_n]; s2_n++)
		;
	sizeBuffer = s1_n + s2_n + 1;
	p = malloc(sizeBuffer);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < sizeBuffer; i++)
	{
		if (i < s1_n)
			p[i] = s1[i];
		else
			p[i] = s2[i - s1_n];
	}
	return (p);
}
