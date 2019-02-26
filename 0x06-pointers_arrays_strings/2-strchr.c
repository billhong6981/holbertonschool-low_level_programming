/**
 * _strchr - a function that locates a character in string.
 * @s: a pointer point to string
 * @c: a constant character search for.
 *
 * Return: the pointer that the string (in success) or NULL for not found.
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (s);
}
