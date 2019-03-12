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
	int nlen, olen, i;
	dog_t *doggy;

	nlen = olen = 0;
	while (name[nlen++])
		;
	while (owner[olen++])
		;
	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);
	doggy->name = malloc(nlen * sizeof(doggy->name));
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}
	for (i = 0; i < nlen; i++)
		doggy->name[i] = name[i];
	doggy->age = age;
	doggy->owner = malloc(olen * sizeof(doggy->owner));
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}
	for (i = 0; i < olen; i++)
		doggy->owner[i] = owner[i];
	return (doggy);
}
