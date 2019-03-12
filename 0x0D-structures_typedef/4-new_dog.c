#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - a function builds dogs informations
 * @name: a dog name as string
 * @age: a dog age in float type
 * @owner: a dog's owner as string
 *
 * Return: return the pointer to new_dog, NULL if fail
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *your_dog;

	your_dog = malloc(sizeof(dog_t));
	if (your_dog == NULL)
		return (NULL);
	your_dog->name = _strdup(name);
	if (your_dog == NULL)
		return (NULL);
	your_dog->age = age;
	your_dog->owner = _strdup(owner);
	if (your_dog == NULL)
		return (NULL);
	return (your_dog);
}

/**
 * _strdup - a function that copies a string into a new buffer
 * @str: a pointer point to the string
 *
 * Return: pointer point to the buffer
 */

char *_strdup(char *str)
{
	char *p;
	unsigned int len, j;

	if (str == NULL)
	return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		;
	len++;
	if (len < 1)
		return (NULL);
	p = malloc(len);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (j = 0; j < len; j++)
		p[j] = str[j];
	p[j] = '\0';
	return (p);
}
